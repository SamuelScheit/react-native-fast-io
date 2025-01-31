///
/// RequestOptions.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

package com.margelo.nitro.fastio

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * Represents the JavaScript object/struct "RequestOptions".
 */
@DoNotStrip
@Keep
data class RequestOptions
  @DoNotStrip
  @Keep
  constructor(
    val url: String,
    val method: RequestMethod,
    val body: HybridInputStreamSpec?,
    val headers: Map<String, String>
  ) {
  /* main constructor */
}
