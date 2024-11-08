///
/// FastIO-Swift-Cxx-Bridge.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `ArrayBufferHolder` to properly resolve imports.
namespace NitroModules { class ArrayBufferHolder; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `HybridFileSystemSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridFileSystemSpec; }
// Forward declaration of `HybridInputStreamSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridInputStreamSpec; }
// Forward declaration of `HybridNetworkSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridNetworkSpec; }
// Forward declaration of `HybridOutputStreamSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridOutputStreamSpec; }
// Forward declaration of `HybridPassThroughStreamSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridPassThroughStreamSpec; }
// Forward declaration of `HybridWebSocketManagerSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridWebSocketManagerSpec; }
// Forward declaration of `HybridWebSocketSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridWebSocketSpec; }

// Forward declarations of Swift defined types
// Forward declaration of `HybridFileSystemSpecCxx` to properly resolve imports.
namespace FastIO { class HybridFileSystemSpecCxx; }
// Forward declaration of `HybridInputStreamSpecCxx` to properly resolve imports.
namespace FastIO { class HybridInputStreamSpecCxx; }
// Forward declaration of `HybridNetworkSpecCxx` to properly resolve imports.
namespace FastIO { class HybridNetworkSpecCxx; }
// Forward declaration of `HybridOutputStreamSpecCxx` to properly resolve imports.
namespace FastIO { class HybridOutputStreamSpecCxx; }
// Forward declaration of `HybridPassThroughStreamSpecCxx` to properly resolve imports.
namespace FastIO { class HybridPassThroughStreamSpecCxx; }
// Forward declaration of `HybridWebSocketManagerSpecCxx` to properly resolve imports.
namespace FastIO { class HybridWebSocketManagerSpecCxx; }
// Forward declaration of `HybridWebSocketSpecCxx` to properly resolve imports.
namespace FastIO { class HybridWebSocketSpecCxx; }

// Include C++ defined types
#include "HybridFileSystemSpec.hpp"
#include "HybridInputStreamSpec.hpp"
#include "HybridNetworkSpec.hpp"
#include "HybridOutputStreamSpec.hpp"
#include "HybridPassThroughStreamSpec.hpp"
#include "HybridWebSocketManagerSpec.hpp"
#include "HybridWebSocketSpec.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/PromiseHolder.hpp>
#include <functional>
#include <future>
#include <memory>
#include <string>
#include <vector>

/**
 * Contains specialized versions of C++ templated types so they can be accessed from Swift,
 * as well as helper functions to interact with those C++ types from Swift.
 */
namespace margelo::nitro::fastio::bridge::swift {

  // pragma MARK: std::shared_ptr<margelo::nitro::fastio::HybridInputStreamSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::fastio::HybridInputStreamSpec>`.
   */
  using std__shared_ptr_margelo__nitro__fastio__HybridInputStreamSpec_ = std::shared_ptr<margelo::nitro::fastio::HybridInputStreamSpec>;
  std::shared_ptr<margelo::nitro::fastio::HybridInputStreamSpec> create_std__shared_ptr_margelo__nitro__fastio__HybridInputStreamSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__fastio__HybridInputStreamSpec_(std__shared_ptr_margelo__nitro__fastio__HybridInputStreamSpec_ cppType);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::fastio::HybridFileSystemSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::fastio::HybridFileSystemSpec>`.
   */
  using std__shared_ptr_margelo__nitro__fastio__HybridFileSystemSpec_ = std::shared_ptr<margelo::nitro::fastio::HybridFileSystemSpec>;
  std::shared_ptr<margelo::nitro::fastio::HybridFileSystemSpec> create_std__shared_ptr_margelo__nitro__fastio__HybridFileSystemSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__fastio__HybridFileSystemSpec_(std__shared_ptr_margelo__nitro__fastio__HybridFileSystemSpec_ cppType);
  
  // pragma MARK: PromiseHolder<void>
  /**
   * Specialized version of `PromiseHolder<void>`.
   */
  using PromiseHolder_void_ = PromiseHolder<void>;
  inline PromiseHolder<void> create_PromiseHolder_void_() {
    return PromiseHolder<void>();
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::fastio::HybridNetworkSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::fastio::HybridNetworkSpec>`.
   */
  using std__shared_ptr_margelo__nitro__fastio__HybridNetworkSpec_ = std::shared_ptr<margelo::nitro::fastio::HybridNetworkSpec>;
  std::shared_ptr<margelo::nitro::fastio::HybridNetworkSpec> create_std__shared_ptr_margelo__nitro__fastio__HybridNetworkSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__fastio__HybridNetworkSpec_(std__shared_ptr_margelo__nitro__fastio__HybridNetworkSpec_ cppType);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::fastio::HybridOutputStreamSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::fastio::HybridOutputStreamSpec>`.
   */
  using std__shared_ptr_margelo__nitro__fastio__HybridOutputStreamSpec_ = std::shared_ptr<margelo::nitro::fastio::HybridOutputStreamSpec>;
  std::shared_ptr<margelo::nitro::fastio::HybridOutputStreamSpec> create_std__shared_ptr_margelo__nitro__fastio__HybridOutputStreamSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__fastio__HybridOutputStreamSpec_(std__shared_ptr_margelo__nitro__fastio__HybridOutputStreamSpec_ cppType);
  
  // pragma MARK: std::shared_ptr<margelo::nitro::fastio::HybridPassThroughStreamSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::fastio::HybridPassThroughStreamSpec>`.
   */
  using std__shared_ptr_margelo__nitro__fastio__HybridPassThroughStreamSpec_ = std::shared_ptr<margelo::nitro::fastio::HybridPassThroughStreamSpec>;
  std::shared_ptr<margelo::nitro::fastio::HybridPassThroughStreamSpec> create_std__shared_ptr_margelo__nitro__fastio__HybridPassThroughStreamSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__fastio__HybridPassThroughStreamSpec_(std__shared_ptr_margelo__nitro__fastio__HybridPassThroughStreamSpec_ cppType);
  
  // pragma MARK: std::function<void(const std::string& /* selectedProtocol */)>
  /**
   * Specialized version of `std::function<void(const std::string&)>`.
   */
  using Func_void_std__string = std::function<void(const std::string& /* selectedProtocol */)>;
  /**
   * Wrapper class for a `std::function<void(const std::string& / * selectedProtocol * /)>`, this can be used from Swift.
   */
  class Func_void_std__string_Wrapper final {
  public:
    explicit Func_void_std__string_Wrapper(const std::function<void(const std::string& /* selectedProtocol */)>& func): _function(func) {}
    explicit Func_void_std__string_Wrapper(std::function<void(const std::string& /* selectedProtocol */)>&& func): _function(std::move(func)) {}
    inline void call(std::string selectedProtocol) const {
      _function(selectedProtocol);
    }
  private:
    std::function<void(const std::string& /* selectedProtocol */)> _function;
  };
  inline Func_void_std__string create_Func_void_std__string(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, std::string), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__string([sharedClosureHolder, call](const std::string& selectedProtocol) -> void {
      call(sharedClosureHolder.get(), selectedProtocol);
    });
  }
  inline std::shared_ptr<Func_void_std__string_Wrapper> share_Func_void_std__string(const Func_void_std__string& value) {
    return std::make_shared<Func_void_std__string_Wrapper>(value);
  }
  
  // pragma MARK: std::function<void(double /* code */, const std::string& /* reason */)>
  /**
   * Specialized version of `std::function<void(double, const std::string&)>`.
   */
  using Func_void_double_std__string = std::function<void(double /* code */, const std::string& /* reason */)>;
  /**
   * Wrapper class for a `std::function<void(double / * code * /, const std::string& / * reason * /)>`, this can be used from Swift.
   */
  class Func_void_double_std__string_Wrapper final {
  public:
    explicit Func_void_double_std__string_Wrapper(const std::function<void(double /* code */, const std::string& /* reason */)>& func): _function(func) {}
    explicit Func_void_double_std__string_Wrapper(std::function<void(double /* code */, const std::string& /* reason */)>&& func): _function(std::move(func)) {}
    inline void call(double code, std::string reason) const {
      _function(code, reason);
    }
  private:
    std::function<void(double /* code */, const std::string& /* reason */)> _function;
  };
  inline Func_void_double_std__string create_Func_void_double_std__string(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, double, std::string), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_double_std__string([sharedClosureHolder, call](double code, const std::string& reason) -> void {
      call(sharedClosureHolder.get(), code, reason);
    });
  }
  inline std::shared_ptr<Func_void_double_std__string_Wrapper> share_Func_void_double_std__string(const Func_void_double_std__string& value) {
    return std::make_shared<Func_void_double_std__string_Wrapper>(value);
  }
  
  // pragma MARK: std::function<void(const std::shared_ptr<ArrayBuffer>& /* buffer */)>
  /**
   * Specialized version of `std::function<void(const std::shared_ptr<ArrayBuffer>&)>`.
   */
  using Func_void_std__shared_ptr_ArrayBuffer_ = std::function<void(const std::shared_ptr<ArrayBuffer>& /* buffer */)>;
  /**
   * Wrapper class for a `std::function<void(const std::shared_ptr<ArrayBuffer>& / * buffer * /)>`, this can be used from Swift.
   */
  class Func_void_std__shared_ptr_ArrayBuffer__Wrapper final {
  public:
    explicit Func_void_std__shared_ptr_ArrayBuffer__Wrapper(const std::function<void(const std::shared_ptr<ArrayBuffer>& /* buffer */)>& func): _function(func) {}
    explicit Func_void_std__shared_ptr_ArrayBuffer__Wrapper(std::function<void(const std::shared_ptr<ArrayBuffer>& /* buffer */)>&& func): _function(std::move(func)) {}
    inline void call(ArrayBufferHolder buffer) const {
      _function(buffer.getArrayBuffer());
    }
  private:
    std::function<void(const std::shared_ptr<ArrayBuffer>& /* buffer */)> _function;
  };
  inline Func_void_std__shared_ptr_ArrayBuffer_ create_Func_void_std__shared_ptr_ArrayBuffer_(void* _Nonnull closureHolder, void(* _Nonnull call)(void* _Nonnull /* closureHolder */, ArrayBufferHolder), void(* _Nonnull destroy)(void* _Nonnull)) {
    std::shared_ptr<void> sharedClosureHolder(closureHolder, destroy);
    return Func_void_std__shared_ptr_ArrayBuffer_([sharedClosureHolder, call](const std::shared_ptr<ArrayBuffer>& buffer) -> void {
      call(sharedClosureHolder.get(), ArrayBufferHolder(buffer));
    });
  }
  inline std::shared_ptr<Func_void_std__shared_ptr_ArrayBuffer__Wrapper> share_Func_void_std__shared_ptr_ArrayBuffer_(const Func_void_std__shared_ptr_ArrayBuffer_& value) {
    return std::make_shared<Func_void_std__shared_ptr_ArrayBuffer__Wrapper>(value);
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::fastio::HybridWebSocketSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::fastio::HybridWebSocketSpec>`.
   */
  using std__shared_ptr_margelo__nitro__fastio__HybridWebSocketSpec_ = std::shared_ptr<margelo::nitro::fastio::HybridWebSocketSpec>;
  std::shared_ptr<margelo::nitro::fastio::HybridWebSocketSpec> create_std__shared_ptr_margelo__nitro__fastio__HybridWebSocketSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__fastio__HybridWebSocketSpec_(std__shared_ptr_margelo__nitro__fastio__HybridWebSocketSpec_ cppType);
  
  // pragma MARK: std::vector<std::string>
  /**
   * Specialized version of `std::vector<std::string>`.
   */
  using std__vector_std__string_ = std::vector<std::string>;
  inline std::vector<std::string> create_std__vector_std__string_(size_t size) {
    std::vector<std::string> vector;
    vector.reserve(size);
    return vector;
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::fastio::HybridWebSocketManagerSpec>
  /**
   * Specialized version of `std::shared_ptr<margelo::nitro::fastio::HybridWebSocketManagerSpec>`.
   */
  using std__shared_ptr_margelo__nitro__fastio__HybridWebSocketManagerSpec_ = std::shared_ptr<margelo::nitro::fastio::HybridWebSocketManagerSpec>;
  std::shared_ptr<margelo::nitro::fastio::HybridWebSocketManagerSpec> create_std__shared_ptr_margelo__nitro__fastio__HybridWebSocketManagerSpec_(void* _Nonnull swiftUnsafePointer);
  void* _Nonnull get_std__shared_ptr_margelo__nitro__fastio__HybridWebSocketManagerSpec_(std__shared_ptr_margelo__nitro__fastio__HybridWebSocketManagerSpec_ cppType);

} // namespace margelo::nitro::fastio::bridge::swift
