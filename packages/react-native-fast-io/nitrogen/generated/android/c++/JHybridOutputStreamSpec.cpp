///
/// JHybridOutputStreamSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "JHybridOutputStreamSpec.hpp"

// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }

#include <NitroModules/Promise.hpp>
#include <NitroModules/JPromise.hpp>
#include <NitroModules/ArrayBuffer.hpp>
#include <NitroModules/JArrayBuffer.hpp>
#include <NitroModules/JUnit.hpp>

namespace margelo::nitro::fastio {

  jni::local_ref<JHybridOutputStreamSpec::jhybriddata> JHybridOutputStreamSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridOutputStreamSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridOutputStreamSpec::initHybrid),
    });
  }

  size_t JHybridOutputStreamSpec::getExternalMemorySize() noexcept {
    static const auto method = _javaPart->getClass()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  

  // Methods
  std::shared_ptr<Promise<void>> JHybridOutputStreamSpec::write(const std::shared_ptr<ArrayBuffer>& buffer) {
    static const auto method = _javaPart->getClass()->getMethod<jni::local_ref<JPromise::javaobject>(jni::alias_ref<JArrayBuffer::javaobject> /* buffer */)>("write");
    auto __result = method(_javaPart, JArrayBuffer::wrap(buffer));
    return [&]() {
      auto __promise = Promise<void>::create();
      __result->cthis()->addOnResolvedListener([=](const jni::alias_ref<jni::JObject>& /* unit */) {
        __promise->resolve();
      });
      __result->cthis()->addOnRejectedListener([=](const jni::alias_ref<jni::JThrowable>& __throwable) {
        jni::JniException __jniError(__throwable);
        __promise->reject(std::make_exception_ptr(__jniError));
      });
      return __promise;
    }();
  }
  void JHybridOutputStreamSpec::open() {
    static const auto method = _javaPart->getClass()->getMethod<void()>("open");
    method(_javaPart);
  }
  void JHybridOutputStreamSpec::close() {
    static const auto method = _javaPart->getClass()->getMethod<void()>("close");
    method(_javaPart);
  }

} // namespace margelo::nitro::fastio
