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
// Forward declaration of `Response` to properly resolve imports.
namespace margelo::nitro::fastio { struct Response; }
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
#include "Response.hpp"
#include "WellKnownDirectory.hpp"
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/Promise.hpp>
#include <NitroModules/Result.hpp>
#include <exception>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

// C++ helpers for Swift
#include "FastIO-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/RuntimeError.hpp>

// Forward declarations of Swift defined types
// Forward declaration of `HybridDuplexStreamSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridDuplexStreamSpec_cxx; }
// Forward declaration of `HybridFileSystemSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridFileSystemSpec_cxx; }
// Forward declaration of `HybridInputStreamSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridInputStreamSpec_cxx; }
// Forward declaration of `HybridNetworkSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridNetworkSpec_cxx; }
// Forward declaration of `HybridOutputStreamSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridOutputStreamSpec_cxx; }
// Forward declaration of `HybridStreamFactorySpec_cxx` to properly resolve imports.
namespace FastIO { class HybridStreamFactorySpec_cxx; }
// Forward declaration of `HybridWebSocketManagerSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridWebSocketManagerSpec_cxx; }
// Forward declaration of `HybridWebSocketSpec_cxx` to properly resolve imports.
namespace FastIO { class HybridWebSocketSpec_cxx; }

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
