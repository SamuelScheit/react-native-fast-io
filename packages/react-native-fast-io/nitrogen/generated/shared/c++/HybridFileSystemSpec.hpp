///
/// HybridFileSystemSpec.hpp
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

// Forward declaration of `Metadata` to properly resolve imports.
namespace margelo::nitro::fastio { struct Metadata; }
// Forward declaration of `WellKnownDirectory` to properly resolve imports.
namespace margelo::nitro::fastio { enum class WellKnownDirectory; }
// Forward declaration of `NativeFilePickerOptions` to properly resolve imports.
namespace margelo::nitro::fastio { struct NativeFilePickerOptions; }

#include "Metadata.hpp"
#include <string>
#include "WellKnownDirectory.hpp"
#include <NitroModules/Promise.hpp>
#include <vector>
#include <optional>
#include "NativeFilePickerOptions.hpp"

namespace margelo::nitro::fastio {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `FileSystem`
   * Inherit this class to create instances of `HybridFileSystemSpec` in C++.
   * You must explicitly call `HybridObject`'s constructor yourself, because it is virtual.
   * @example
   * ```cpp
   * class HybridFileSystem: public HybridFileSystemSpec {
   * public:
   *   HybridFileSystem(...): HybridObject(TAG) { ... }
   *   // ...
   * };
   * ```
   */
  class HybridFileSystemSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridFileSystemSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridFileSystemSpec() { }

    public:
      // Properties
      

    public:
      // Methods
      virtual Metadata getMetadata(const std::string& path) = 0;
      virtual std::string getWellKnownDirectoryPath(WellKnownDirectory directory) = 0;
      virtual std::shared_ptr<Promise<std::vector<std::string>>> showOpenFilePicker(const std::optional<NativeFilePickerOptions>& options) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "FileSystem";
  };

} // namespace margelo::nitro::fastio
