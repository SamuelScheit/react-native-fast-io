///
/// Response.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `Response`, backed by a C++ struct.
 */
public typealias Response = margelo.nitro.fastio.Response

public extension Response {
  private typealias bridge = margelo.nitro.fastio.bridge.swift

  /**
   * Create a new instance of `Response`.
   */
  init(status: Double, body: (any HybridInputStreamSpec), headers: AnyMapHolder) {
    self.init(status, { () -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridInputStreamSpec_ in
      let __cxxWrapped = body.getCxxWrapper()
      return __cxxWrapped.getCxxPart()
    }(), headers.cppPart)
  }

  var status: Double {
    @inline(__always)
    get {
      return self.__status
    }
    @inline(__always)
    set {
      self.__status = newValue
    }
  }
  
  var body: (any HybridInputStreamSpec) {
    @inline(__always)
    get {
      return { () -> HybridInputStreamSpec in
        let __unsafePointer = bridge.get_std__shared_ptr_margelo__nitro__fastio__HybridInputStreamSpec_(self.__body)
        let __instance = HybridInputStreamSpec_cxx.fromUnsafe(__unsafePointer)
        return __instance.getHybridInputStreamSpec()
      }()
    }
    @inline(__always)
    set {
      self.__body = { () -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridInputStreamSpec_ in
        let __cxxWrapped = newValue.getCxxWrapper()
        return __cxxWrapped.getCxxPart()
      }()
    }
  }
  
  var headers: AnyMapHolder {
    @inline(__always)
    get {
      return AnyMapHolder(withCppPart: self.__headers)
    }
    @inline(__always)
    set {
      self.__headers = newValue.cppPart
    }
  }
}
