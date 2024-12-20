///
/// HybridWebSocketSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/// See ``HybridWebSocketSpec``
public protocol HybridWebSocketSpec_protocol: AnyObject {
  // Properties
  

  // Methods
  func send(message: String) throws -> Void
  func sendArrayBuffer(buffer: ArrayBufferHolder) throws -> Void
  func connect() throws -> Void
  func close(code: Double, reason: String) throws -> Void
  func ping() throws -> Void
  func onOpen(callback: @escaping ((_ selectedProtocol: String) -> Void)) throws -> Void
  func onClose(callback: @escaping ((_ code: Double, _ reason: String) -> Void)) throws -> Void
  func onError(callback: @escaping ((_ error: String) -> Void)) throws -> Void
  func onMessage(callback: @escaping ((_ message: String) -> Void)) throws -> Void
  func onArrayBuffer(callback: @escaping ((_ buffer: ArrayBufferHolder) -> Void)) throws -> Void
}

/// See ``HybridWebSocketSpec``
public class HybridWebSocketSpec_base: HybridObjectSpec {
  private weak var cxxWrapper: HybridWebSocketSpec_cxx? = nil
  public func getCxxWrapper() -> HybridWebSocketSpec_cxx {
  #if DEBUG
    guard self is HybridWebSocketSpec else {
      fatalError("`self` is not a `HybridWebSocketSpec`! Did you accidentally inherit from `HybridWebSocketSpec_base` instead of `HybridWebSocketSpec`?")
    }
  #endif
    if let cxxWrapper = self.cxxWrapper {
      return cxxWrapper
    } else {
      let cxxWrapper = HybridWebSocketSpec_cxx(self as! HybridWebSocketSpec)
      self.cxxWrapper = cxxWrapper
      return cxxWrapper
    }
  }
  public var memorySize: Int { return 0 }
}

/**
 * A Swift base-protocol representing the WebSocket HybridObject.
 * Implement this protocol to create Swift-based instances of WebSocket.
 * ```swift
 * class HybridWebSocket : HybridWebSocketSpec {
 *   // ...
 * }
 * ```
 */
public typealias HybridWebSocketSpec = HybridWebSocketSpec_protocol & HybridWebSocketSpec_base
