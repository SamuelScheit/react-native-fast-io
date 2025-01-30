///
/// HybridFileSystemSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridFileSystemSpec.hpp"




namespace margelo::nitro::fastio {

  using namespace facebook;

  class JHybridFileSystemSpec: public jni::HybridClass<JHybridFileSystemSpec, JHybridObject>,
                               public virtual HybridFileSystemSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/fastio/HybridFileSystemSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  protected:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridFileSystemSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridFileSystemSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    virtual ~JHybridFileSystemSpec() {
      // Hermes GC can destroy JS objects on a non-JNI Thread.
      jni::ThreadScope::WithClassLoader([&] { _javaPart.reset(); });
    }

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridFileSystemSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    

  public:
    // Methods
    Metadata getMetadata(const std::string& path) override;
    std::string getWellKnownDirectoryPath(WellKnownDirectory directory) override;
    std::shared_ptr<Promise<std::vector<std::string>>> showOpenFilePicker(const std::optional<NativeFilePickerOptions>& options) override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridFileSystemSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::fastio
