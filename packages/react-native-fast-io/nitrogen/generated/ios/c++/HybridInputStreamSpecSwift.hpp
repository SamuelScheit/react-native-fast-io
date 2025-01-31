///
/// HybridInputStreamSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridInputStreamSpec.hpp"

// Forward declaration of `HybridInputStreamSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridInputStreamSpec_cxx; }

// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `ArrayBufferHolder` to properly resolve imports.
namespace NitroModules { class ArrayBufferHolder; }

#include <NitroModules/Promise.hpp>
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/ArrayBufferHolder.hpp>

#include "FastIO-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::fastio {

  /**
   * The C++ part of HybridInputStreamSpec_cxx.swift.
   *
   * HybridInputStreamSpecSwift (C++) accesses HybridInputStreamSpec_cxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridInputStreamSpec_cxx can directly inherit from the C++ class HybridInputStreamSpec
   * to simplify the whole structure and memory management.
   */
  class HybridInputStreamSpecSwift: public virtual HybridInputStreamSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridInputStreamSpecSwift(const FastIO::HybridInputStreamSpec_cxx& swiftPart):
      HybridObject(HybridInputStreamSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline FastIO::HybridInputStreamSpec_cxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline std::shared_ptr<Promise<std::shared_ptr<ArrayBuffer>>> read() override {
      auto __result = _swiftPart.read();
      if (__result.hasError()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
      auto __value = std::move(__result.value());
      return __value;
    }
    inline void open() override {
      auto __result = _swiftPart.open();
      if (__result.hasError()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }
    inline void close() override {
      auto __result = _swiftPart.close();
      if (__result.hasError()) [[unlikely]] {
        std::rethrow_exception(__result.error());
      }
    }

  private:
    FastIO::HybridInputStreamSpec_cxx _swiftPart;
  };

} // namespace margelo::nitro::fastio
