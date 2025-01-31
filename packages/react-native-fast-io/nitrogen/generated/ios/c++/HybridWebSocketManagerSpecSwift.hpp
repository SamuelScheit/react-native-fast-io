///
/// HybridWebSocketManagerSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridWebSocketManagerSpec.hpp"

// Forward declaration of `HybridWebSocketManagerSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridWebSocketManagerSpec_cxx; }

// Forward declaration of `HybridWebSocketSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridWebSocketSpec; }

#include <memory>
#include "HybridWebSocketSpec.hpp"
#include <string>
#include <vector>

#include "FastIO-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::fastio {

  /**
   * The C++ part of HybridWebSocketManagerSpec_cxx.swift.
   *
   * HybridWebSocketManagerSpecSwift (C++) accesses HybridWebSocketManagerSpec_cxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridWebSocketManagerSpec_cxx can directly inherit from the C++ class HybridWebSocketManagerSpec
   * to simplify the whole structure and memory management.
   */
  class HybridWebSocketManagerSpecSwift: public virtual HybridWebSocketManagerSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridWebSocketManagerSpecSwift(const FastIO::HybridWebSocketManagerSpec_cxx& swiftPart):
      HybridObject(HybridWebSocketManagerSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline FastIO::HybridWebSocketManagerSpec_cxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline std::shared_ptr<margelo::nitro::fastio::HybridWebSocketSpec> create(const std::string& url, const std::vector<std::string>& protocols) override {
      auto __result = _swiftPart.create(url, protocols);
      if (__result.hasError()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }

  private:
    FastIO::HybridWebSocketManagerSpec_cxx _swiftPart;
  };

} // namespace margelo::nitro::fastio
