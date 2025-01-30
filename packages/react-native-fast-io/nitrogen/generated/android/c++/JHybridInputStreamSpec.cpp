///
/// JHybridInputStreamSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "JHybridInputStreamSpec.hpp"

// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }

#include <NitroModules/Promise.hpp>
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/JPromise.hpp>
#include <NitroModules/JArrayBuffer.hpp>
#include <NitroModules/JUnit.hpp>

namespace margelo::nitro::fastio {

  jni::local_ref<JHybridInputStreamSpec::jhybriddata> JHybridInputStreamSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridInputStreamSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridInputStreamSpec::initHybrid),
    });
  }

  size_t JHybridInputStreamSpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  

  // Methods
  std::shared_ptr<Promise<std::shared_ptr<ArrayBuffer>>> JHybridInputStreamSpec::read() {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JPromise::javaobject>()>("read");
    auto __result = method(_javaPart);
    return [&]() {
      auto __promise = Promise<std::shared_ptr<ArrayBuffer>>::create();
      __result->cthis()->addOnResolvedListener([=](const jni::alias_ref<jni::JObject>& __boxedResult) {
        auto __result = jni::static_ref_cast<JArrayBuffer::javaobject>(__boxedResult);
        __promise->resolve(__result->cthis()->getArrayBuffer());
      });
      __result->cthis()->addOnRejectedListener([=](const jni::alias_ref<jni::JThrowable>& __throwable) {
        jni::JniException __jniError(__throwable);
        __promise->reject(std::make_exception_ptr(__jniError));
      });
      return __promise;
    }();
  }
  void JHybridInputStreamSpec::open() {
    static const auto method = _javaPart->getClass()->getMethod<void()>("open");
    method(_javaPart);
  }
  void JHybridInputStreamSpec::close() {
    static const auto method = _javaPart->getClass()->getMethod<void()>("close");
    method(_javaPart);
  }

} // namespace margelo::nitro::fastio
