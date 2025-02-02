///
/// Response.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

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

// Forward declaration of `HybridInputStreamSpec` to properly resolve imports.
namespace margelo::nitro::fastio { class HybridInputStreamSpec; }

#include <memory>
#include "HybridInputStreamSpec.hpp"
#include <unordered_map>
#include <string>

namespace margelo::nitro::fastio {

  /**
   * A struct which can be represented as a JavaScript object (Response).
   */
  struct Response {
  public:
    double status     SWIFT_PRIVATE;
    std::shared_ptr<margelo::nitro::fastio::HybridInputStreamSpec> body     SWIFT_PRIVATE;
    std::unordered_map<std::string, std::string> headers     SWIFT_PRIVATE;

  public:
    explicit Response(double status, std::shared_ptr<margelo::nitro::fastio::HybridInputStreamSpec> body, std::unordered_map<std::string, std::string> headers): status(status), body(body), headers(headers) {}
  };

} // namespace margelo::nitro::fastio

namespace margelo::nitro {

  using namespace margelo::nitro::fastio;

  // C++ Response <> JS Response (object)
  template <>
  struct JSIConverter<Response> {
    static inline Response fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      jsi::Object obj = arg.asObject(runtime);
      return Response(
        JSIConverter<double>::fromJSI(runtime, obj.getProperty(runtime, "status")),
        JSIConverter<std::shared_ptr<margelo::nitro::fastio::HybridInputStreamSpec>>::fromJSI(runtime, obj.getProperty(runtime, "body")),
        JSIConverter<std::unordered_map<std::string, std::string>>::fromJSI(runtime, obj.getProperty(runtime, "headers"))
      );
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, const Response& arg) {
      jsi::Object obj(runtime);
      obj.setProperty(runtime, "status", JSIConverter<double>::toJSI(runtime, arg.status));
      obj.setProperty(runtime, "body", JSIConverter<std::shared_ptr<margelo::nitro::fastio::HybridInputStreamSpec>>::toJSI(runtime, arg.body));
      obj.setProperty(runtime, "headers", JSIConverter<std::unordered_map<std::string, std::string>>::toJSI(runtime, arg.headers));
      return obj;
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isObject()) {
        return false;
      }
      jsi::Object obj = value.getObject(runtime);
      if (!JSIConverter<double>::canConvert(runtime, obj.getProperty(runtime, "status"))) return false;
      if (!JSIConverter<std::shared_ptr<margelo::nitro::fastio::HybridInputStreamSpec>>::canConvert(runtime, obj.getProperty(runtime, "body"))) return false;
      if (!JSIConverter<std::unordered_map<std::string, std::string>>::canConvert(runtime, obj.getProperty(runtime, "headers"))) return false;
      return true;
    }
  };

} // namespace margelo::nitro
