///
/// HybridWebSocketManagerSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `HybridWebSocketSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridWebSocketSpec; }

#include <memory>
#include "HybridWebSocketSpec.hpp"
#include <string>
#include <vector>

namespace margelo::nitro::fastio {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `WebSocketManager`
   * Inherit this class to create instances of `HybridWebSocketManagerSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridWebSocketManager: public HybridWebSocketManagerSpec {
   * public:
   *   HybridWebSocketManager(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridWebSocketManagerSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridWebSocketManagerSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridWebSocketManagerSpec() { }

    public:
      // Properties
      

    public:
      // Methods
      virtual std::shared_ptr<margelo::nitro::fastio::HybridWebSocketSpec> create(const std::string& url, const std::vector<std::string>& protocols) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "WebSocketManager";
  };

} // namespace margelo::nitro::fastio
