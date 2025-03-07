///
/// HybridNetworkSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridNetworkSpec.hpp"

// Forward declaration of `HybridNetworkSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridNetworkSpec_cxx; }

// Forward declaration of `Response` to properly resolve imports.
namespace margelo::nitro::fastio { struct Response; }
// Forward declaration of `HybridInputStreamSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridInputStreamSpec; }
// Forward declaration of `AnyMap` to properly resolve imports.
namespace NitroModules { class AnyMap; }
// Forward declaration of `RequestOptions` to properly resolve imports.
namespace margelo::nitro::fastio { struct RequestOptions; }
// Forward declaration of `RequestMethod` to properly resolve imports.
namespace margelo::nitro::fastio { enum class RequestMethod; }

#include <NitroModules/Promise.hpp>
#include "Response.hpp"
#include <memory>
#include "HybridInputStreamSpec.hpp"
#include <NitroModules/AnyMap.hpp>
#include "RequestOptions.hpp"
#include <string>
#include "RequestMethod.hpp"
#include <optional>
#include <unordered_map>

#include "FastIO-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::fastio {

  /**
   * The C++ part of HybridNetworkSpec_cxx.swift.
   *
   * HybridNetworkSpecSwift (C++) accesses HybridNetworkSpec_cxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridNetworkSpec_cxx can directly inherit from the C++ class HybridNetworkSpec
   * to simplify the whole structure and memory management.
   */
  class HybridNetworkSpecSwift: public virtual HybridNetworkSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridNetworkSpecSwift(const FastIO::HybridNetworkSpec_cxx& swiftPart):
      HybridObject(HybridNetworkSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline FastIO::HybridNetworkSpec_cxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline std::shared_ptr<Promise<Response>> request(const RequestOptions& opts) override {
      auto __result = _swiftPart.request(opts);
      if (__result.hasError()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }

  private:
    FastIO::HybridNetworkSpec_cxx _swiftPart;
  };

} // namespace margelo::nitro::fastio
