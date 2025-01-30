///
/// HybridWebSocketManagerSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridWebSocketManagerSpec.hpp"




namespace margelo::nitro::fastio {

  using namespace facebook;

  class JHybridWebSocketManagerSpec: public jni::HybridClass<JHybridWebSocketManagerSpec, JHybridObject>,
                                     public virtual HybridWebSocketManagerSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/fastio/HybridWebSocketManagerSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  protected:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridWebSocketManagerSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridWebSocketManagerSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    virtual ~JHybridWebSocketManagerSpec() {
      // Hermes GC can destroy JS objects on a non-JNI Thread.
      jni::ThreadScope::WithClassLoader([&] { _javaPart.reset(); });
    }

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridWebSocketManagerSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    

  public:
    // Methods
    std::shared_ptr<margelo::nitro::fastio::HybridWebSocketSpec> create(const std::string& url, const std::vector<std::string>& protocols) override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridWebSocketManagerSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::fastio
