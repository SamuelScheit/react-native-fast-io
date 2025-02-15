//
//  HybridStyle.swift
//  ReactNativeFastWS
//
//  Created by Mike Grabowski on 13/09/2024.
//

import NitroModules

class HybridWebSocket : HybridWebSocketSpec {
  var onOpen: ((String) -> Void)?
  var onClose: ((Double, String) -> Void)?
  var onError: ((String) -> Void)?
  
  var onMessage: ((String) -> Void)?
  var onArrayBuffer: ((ArrayBufferHolder) -> Void)?
  
  let ws: URLSessionWebSocketTask
  let urlSession: URLSession
  
  public init (url: String, protocols: [String]) {
    let delegate = WebSocketDelegate()
        
    urlSession = URLSession(configuration: .default, delegate: delegate, delegateQueue: nil)
    ws = urlSession.webSocketTask(with: URL(string: url)!, protocols: protocols)
    
    super.init()
    
    delegate.onOpen = { [weak self] selectedProtocol in
      self?.onOpen?(selectedProtocol ?? "")
    }
    
    delegate.onClose = { [weak self] closeCode, reason in
      let data = if let reason {
        String(bytes: reason, encoding: .utf8) ?? ""
      } else {
        ""
      }
      
      self?.onClose?(Double(closeCode.rawValue), data)
    }
    
    
    listen()
  }
  
  func connect() {
    ws.resume()
  }
  
  func close(code: Double, reason: String) {
    ws.cancel(with: .init(rawValue: Int(code)) ?? .invalid, reason: reason.data(using: .utf8))
  }
  
  func listen()  {
    let stream = WebSocketStream(ws: ws)
    Task { [weak self] in
      do {
        for try await message in stream {
          guard let self else { return }
          switch message {
          case .string(let text):
            self.onMessage?(text)
          case .data(let content):
            self.processArrayBuffer(content)
          @unknown default:
            self.onError?("Unknown message type received - \(message)")
          }
        }
      } catch {
        self?.onError?(error.localizedDescription)
      }
    }
  }

  func processArrayBuffer(_ other: Data) {
    let data = UnsafeMutablePointer<UInt8>.allocate(capacity: other.count)
    other.copyBytes(to: data, count: other.count)
    
    let deleteFunc = SwiftClosure {
      data.deallocate()
    }
    
    self.onArrayBuffer?(ArrayBufferHolder.wrap(data, other.count, deleteFunc))
  }
  
  func send(message: String) {
    ws.send(URLSessionWebSocketTask.Message.string(message)) { error in
      if let error {
        self.onError?(error.localizedDescription)
      }
    }
  }
  
  func sendArrayBuffer(buffer: ArrayBufferHolder) throws {
    let data = Data(bytes: buffer.data, count: buffer.size)
    ws.send(.data(data)) { error in
      if let error {
        self.onError?(error.localizedDescription)
      }
    }
  }
  
  func ping() {
    ws.sendPing { error in
      if let error {
        self.onError?(error.localizedDescription)
      }
    }
  }
  
  func onOpen(callback: @escaping ((String) -> Void)) {
    onOpen = callback
  }
  
  func onClose(callback: @escaping ((Double, String) -> Void)) {
    onClose = callback
  }
  
  func onMessage(callback: @escaping ((String) -> Void)) {
    onMessage = callback
  }
  
  func onArrayBuffer(callback: @escaping ((ArrayBufferHolder) -> Void)) {
    onArrayBuffer = callback
  }
  
  func onError(callback: @escaping ((String) -> Void)) {
    onError = callback
  }
  
  deinit {
    urlSession.invalidateAndCancel()
  }
}
