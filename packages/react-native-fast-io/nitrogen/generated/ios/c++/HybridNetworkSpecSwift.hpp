///
/// HybridNetworkSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridNetworkSpec.hpp"

// Forward declaration of `HybridNetworkSpecCxx` to properly resolve imports.
namespace FastIO { class HybridNetworkSpecCxx; }

// Forward declaration of `RequestOptions` to properly resolve imports.
namespace margelo::nitro::fastio { struct RequestOptions; }
// Forward declaration of `RequestMethod` to properly resolve imports.
namespace margelo::nitro::fastio { enum class RequestMethod; }
// Forward declaration of `HybridInputStreamSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridInputStreamSpec; }

#include <NitroModules/Promise.hpp>
#include "RequestOptions.hpp"
#include <string>
#include "RequestMethod.hpp"
#include <optional>
#include <memory>
#include "HybridInputStreamSpec.hpp"

#if __has_include(<NitroModules/HybridContext.hpp>)
#include <NitroModules/HybridContext.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

#include "FastIO-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::fastio {

  /**
   * The C++ part of HybridNetworkSpecCxx.swift.
   *
   * HybridNetworkSpecSwift (C++) accesses HybridNetworkSpecCxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridNetworkSpecCxx can directly inherit from the C++ class HybridNetworkSpec
   * to simplify the whole structure and memory management.
   */
  class HybridNetworkSpecSwift: public virtual HybridNetworkSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridNetworkSpecSwift(const FastIO::HybridNetworkSpecCxx& swiftPart):
      HybridObject(HybridNetworkSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline FastIO::HybridNetworkSpecCxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline std::shared_ptr<Promise<void>> request(const RequestOptions& opts) override {
      auto __result = _swiftPart.request(opts);
      return __result;
    }

  private:
    FastIO::HybridNetworkSpecCxx _swiftPart;
  };

} // namespace margelo::nitro::fastio
