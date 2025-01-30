///
/// HybridNetworkSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridNetworkSpec.hpp"




namespace margelo::nitro::fastio {

  using namespace facebook;

  class JHybridNetworkSpec: public jni::HybridClass<JHybridNetworkSpec, JHybridObject>,
                            public virtual HybridNetworkSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/fastio/HybridNetworkSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  protected:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridNetworkSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridNetworkSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    virtual ~JHybridNetworkSpec() {
      // Hermes GC can destroy JS objects on a non-JNI Thread.
      jni::ThreadScope::WithClassLoader([&] { _javaPart.reset(); });
    }

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridNetworkSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    

  public:
    // Methods
    std::shared_ptr<Promise<void>> request(const RequestOptions& opts) override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridNetworkSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::fastio
