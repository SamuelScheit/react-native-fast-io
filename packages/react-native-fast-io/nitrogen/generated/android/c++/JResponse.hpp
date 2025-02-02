///
/// JResponse.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "Response.hpp"

#include "HybridInputStreamSpec.hpp"
#include "JHybridInputStreamSpec.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include <memory>
#include <string>
#include <unordered_map>

namespace margelo::nitro::fastio {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "Response" and the the Kotlin data class "Response".
   */
  struct JResponse final: public jni::JavaClass<JResponse> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/fastio/Response;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct Response by copying all values to C++.
     */
    [[maybe_unused]]
    [[nodiscard]]
    Response toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldStatus = clazz->getField<double>("status");
      double status = this->getFieldValue(fieldStatus);
      static const auto fieldBody = clazz->getField<JHybridInputStreamSpec::javaobject>("body");
      jni::local_ref<JHybridInputStreamSpec::javaobject> body = this->getFieldValue(fieldBody);
      static const auto fieldHeaders = clazz->getField<jni::JHashMap<jni::JString, jni::JString>>("headers");
      jni::local_ref<jni::JHashMap<jni::JString, jni::JString>> headers = this->getFieldValue(fieldHeaders);
      return Response(
        status,
        JNISharedPtr::make_shared_from_jni<JHybridInputStreamSpec>(jni::make_global(body)),
        [&]() {
          std::unordered_map<std::string, std::string> __map;
          __map.reserve(headers->size());
          for (const auto& __entry : *headers) {
            __map.emplace(__entry.first->toStdString(), __entry.second->toStdString());
          }
          return __map;
        }()
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JResponse::javaobject> fromCpp(const Response& value) {
      return newInstance(
        value.status,
        std::dynamic_pointer_cast<JHybridInputStreamSpec>(value.body)->getJavaPart(),
        [&]() {
          auto __map = jni::JHashMap<jni::JString, jni::JString>::create(value.headers.size());
          for (const auto& __entry : value.headers) {
            __map->put(jni::make_jstring(__entry.first), jni::make_jstring(__entry.second));
          }
          return __map;
        }()
      );
    }
  };

} // namespace margelo::nitro::fastio
