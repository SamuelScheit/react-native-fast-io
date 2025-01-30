///
/// WellKnownDirectory.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/NitroHash.hpp>)
#include <NitroModules/NitroHash.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

namespace margelo::nitro::fastio {

  /**
   * An enum which can be represented as a JavaScript union (WellKnownDirectory).
   */
  enum class WellKnownDirectory {
    DESKTOP      SWIFT_NAME(desktop) = 0,
    DOCUMENTS      SWIFT_NAME(documents) = 1,
    DOWNLOADS      SWIFT_NAME(downloads) = 2,
    MUSIC      SWIFT_NAME(music) = 3,
    PICTURES      SWIFT_NAME(pictures) = 4,
    VIDEOS      SWIFT_NAME(videos) = 5,
  } CLOSED_ENUM;

} // namespace margelo::nitro::fastio

namespace margelo::nitro {

  using namespace margelo::nitro::fastio;

  // C++ WellKnownDirectory <> JS WellKnownDirectory (union)
  template <>
  struct JSIConverter<WellKnownDirectory> {
    static inline WellKnownDirectory fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, arg);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("desktop"): return WellKnownDirectory::DESKTOP;
        case hashString("documents"): return WellKnownDirectory::DOCUMENTS;
        case hashString("downloads"): return WellKnownDirectory::DOWNLOADS;
        case hashString("music"): return WellKnownDirectory::MUSIC;
        case hashString("pictures"): return WellKnownDirectory::PICTURES;
        case hashString("videos"): return WellKnownDirectory::VIDEOS;
        default: [[unlikely]]
          throw std::invalid_argument("Cannot convert \"" + unionValue + "\" to enum WellKnownDirectory - invalid value!");
      }
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, WellKnownDirectory arg) {
      switch (arg) {
        case WellKnownDirectory::DESKTOP: return JSIConverter<std::string>::toJSI(runtime, "desktop");
        case WellKnownDirectory::DOCUMENTS: return JSIConverter<std::string>::toJSI(runtime, "documents");
        case WellKnownDirectory::DOWNLOADS: return JSIConverter<std::string>::toJSI(runtime, "downloads");
        case WellKnownDirectory::MUSIC: return JSIConverter<std::string>::toJSI(runtime, "music");
        case WellKnownDirectory::PICTURES: return JSIConverter<std::string>::toJSI(runtime, "pictures");
        case WellKnownDirectory::VIDEOS: return JSIConverter<std::string>::toJSI(runtime, "videos");
        default: [[unlikely]]
          throw std::invalid_argument("Cannot convert WellKnownDirectory to JS - invalid value: "
                                    + std::to_string(static_cast<int>(arg)) + "!");
      }
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isString()) {
        return false;
      }
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, value);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("desktop"):
        case hashString("documents"):
        case hashString("downloads"):
        case hashString("music"):
        case hashString("pictures"):
        case hashString("videos"):
          return true;
        default:
          return false;
      }
    }
  };

} // namespace margelo::nitro
