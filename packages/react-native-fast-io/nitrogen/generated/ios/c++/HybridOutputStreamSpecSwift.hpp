///
/// HybridOutputStreamSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridOutputStreamSpec.hpp"

// Forward declaration of `HybridOutputStreamSpecCxx` to properly resolve imports.
namespace FastIO { class HybridOutputStreamSpecCxx; }

// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `ArrayBufferHolder` to properly resolve imports.
namespace NitroModules { class ArrayBufferHolder; }

#include <NitroModules/Promise.hpp>
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/ArrayBufferHolder.hpp>

#if __has_include(<NitroModules/HybridContext.hpp>)
#include <NitroModules/HybridContext.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

#include "FastIO-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::fastio {

  /**
   * The C++ part of HybridOutputStreamSpecCxx.swift.
   *
   * HybridOutputStreamSpecSwift (C++) accesses HybridOutputStreamSpecCxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridOutputStreamSpecCxx can directly inherit from the C++ class HybridOutputStreamSpec
   * to simplify the whole structure and memory management.
   */
  class HybridOutputStreamSpecSwift: public virtual HybridOutputStreamSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridOutputStreamSpecSwift(const FastIO::HybridOutputStreamSpecCxx& swiftPart):
      HybridObject(HybridOutputStreamSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline FastIO::HybridOutputStreamSpecCxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline std::shared_ptr<Promise<void>> write(const std::shared_ptr<ArrayBuffer>& buffer) override {
      auto __result = _swiftPart.write(ArrayBufferHolder(buffer));
      return __result;
    }
    inline void open() override {
      _swiftPart.open();
    }
    inline void close() override {
      _swiftPart.close();
    }

  private:
    FastIO::HybridOutputStreamSpecCxx _swiftPart;
  };

} // namespace margelo::nitro::fastio
