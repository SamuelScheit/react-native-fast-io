///
/// FastIOAutolinking.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

public final class FastIOAutolinking {
  public typealias bridge = margelo.nitro.fastio.bridge.swift

  /**
   * Creates an instance of a Swift class that implements `HybridWebSocketManagerSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridWebSocketManagerSpec_cxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridWebSocketManager`).
   */
  public static func createWebSocketManager() -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridWebSocketManagerSpec_ {
    let hybridObject = HybridWebSocketManager()
    return { () -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridWebSocketManagerSpec_ in
      let __cxxWrapped = hybridObject.getCxxWrapper()
      return __cxxWrapped.getCxxPart()
    }()
  }
  
  /**
   * Creates an instance of a Swift class that implements `HybridFileSystemSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridFileSystemSpec_cxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridFileSystem`).
   */
  public static func createFileSystem() -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridFileSystemSpec_ {
    let hybridObject = HybridFileSystem()
    return { () -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridFileSystemSpec_ in
      let __cxxWrapped = hybridObject.getCxxWrapper()
      return __cxxWrapped.getCxxPart()
    }()
  }
  
  /**
   * Creates an instance of a Swift class that implements `HybridNetworkSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridNetworkSpec_cxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridNetwork`).
   */
  public static func createNetwork() -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridNetworkSpec_ {
    let hybridObject = HybridNetwork()
    return { () -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridNetworkSpec_ in
      let __cxxWrapped = hybridObject.getCxxWrapper()
      return __cxxWrapped.getCxxPart()
    }()
  }
  
  /**
   * Creates an instance of a Swift class that implements `HybridDuplexStreamSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridDuplexStreamSpec_cxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridDuplexStream`).
   */
  public static func createDuplexStream() -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridDuplexStreamSpec_ {
    let hybridObject = HybridDuplexStream()
    return { () -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridDuplexStreamSpec_ in
      let __cxxWrapped = hybridObject.getCxxWrapper()
      return __cxxWrapped.getCxxPart()
    }()
  }
  
  /**
   * Creates an instance of a Swift class that implements `HybridStreamFactorySpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridStreamFactorySpec_cxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridStreamFactory`).
   */
  public static func createStreamFactory() -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridStreamFactorySpec_ {
    let hybridObject = HybridStreamFactory()
    return { () -> bridge.std__shared_ptr_margelo__nitro__fastio__HybridStreamFactorySpec_ in
      let __cxxWrapped = hybridObject.getCxxWrapper()
      return __cxxWrapped.getCxxPart()
    }()
  }
}
