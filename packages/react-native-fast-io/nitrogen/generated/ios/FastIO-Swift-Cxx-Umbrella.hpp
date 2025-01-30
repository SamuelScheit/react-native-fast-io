///
/// FastIO-Swift-Cxx-Umbrella.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }
// Forward declaration of `HybridDuplexStreamSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridDuplexStreamSpec; }
// Forward declaration of `HybridFileSystemSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridFileSystemSpec; }
// Forward declaration of `HybridInputStreamSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridInputStreamSpec; }
// Forward declaration of `HybridNetworkSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridNetworkSpec; }
// Forward declaration of `HybridOutputStreamSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridOutputStreamSpec; }
// Forward declaration of `HybridStreamFactorySpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridStreamFactorySpec; }
// Forward declaration of `HybridWebSocketManagerSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridWebSocketManagerSpec; }
// Forward declaration of `HybridWebSocketSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridWebSocketSpec; }
// Forward declaration of `Metadata` to properly resolve imports.
namespace margelo::nitro::fastio { struct Metadata; }
// Forward declaration of `NativeFilePickerOptions` to properly resolve imports.
namespace margelo::nitro::fastio { struct NativeFilePickerOptions; }
// Forward declaration of `RequestMethod` to properly resolve imports.
namespace margelo::nitro::fastio { enum class RequestMethod; }
// Forward declaration of `RequestOptions` to properly resolve imports.
namespace margelo::nitro::fastio { struct RequestOptions; }
// Forward declaration of `WellKnownDirectory` to properly resolve imports.
namespace margelo::nitro::fastio { enum class WellKnownDirectory; }

// Include C++ defined types
#include "HybridDuplexStreamSpec.hpp"
#include "HybridFileSystemSpec.hpp"
#include "HybridInputStreamSpec.hpp"
#include "HybridNetworkSpec.hpp"
#include "HybridOutputStreamSpec.hpp"
#include "HybridStreamFactorySpec.hpp"
#include "HybridWebSocketManagerSpec.hpp"
#include "HybridWebSocketSpec.hpp"
#include "Metadata.hpp"
#include "NativeFilePickerOptions.hpp"
#include "RequestMethod.hpp"
#include "RequestOptions.hpp"
#include "WellKnownDirectory.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/Promise.hpp>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>

// C++ helpers for Swift
#include "FastIO-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/RuntimeError.hpp>

// Forward declarations of Swift defined types
// Forward declaration of `HybridDuplexStreamSpecCxx` to properly resolve imports.
namespace FastIO { class HybridDuplexStreamSpecCxx; }
// Forward declaration of `HybridFileSystemSpecCxx` to properly resolve imports.
namespace FastIO { class HybridFileSystemSpecCxx; }
// Forward declaration of `HybridInputStreamSpecCxx` to properly resolve imports.
namespace FastIO { class HybridInputStreamSpecCxx; }
// Forward declaration of `HybridNetworkSpecCxx` to properly resolve imports.
namespace FastIO { class HybridNetworkSpecCxx; }
// Forward declaration of `HybridOutputStreamSpecCxx` to properly resolve imports.
namespace FastIO { class HybridOutputStreamSpecCxx; }
// Forward declaration of `HybridStreamFactorySpecCxx` to properly resolve imports.
namespace FastIO { class HybridStreamFactorySpecCxx; }
// Forward declaration of `HybridWebSocketManagerSpecCxx` to properly resolve imports.
namespace FastIO { class HybridWebSocketManagerSpecCxx; }
// Forward declaration of `HybridWebSocketSpecCxx` to properly resolve imports.
namespace FastIO { class HybridWebSocketSpecCxx; }

// Include Swift defined types
#if __has_include("FastIO-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "FastIO".
#include "FastIO-Swift.h"
// Same as above, but used when building with frameworks (`use_frameworks`)
#elif __has_include(<FastIO/FastIO-Swift.h>)
#include <FastIO/FastIO-Swift.h>
#else
#error FastIO's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "FastIO", and try building the app first.
#endif
