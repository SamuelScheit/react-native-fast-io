///
/// RequestMethod.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

package com.margelo.nitro.fastio

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip

/**
 * Represents the JavaScript enum/union "RequestMethod".
 */
@DoNotStrip
@Keep
enum class RequestMethod {
  POST,
  GET,
  PUT,
  DELETE,
  PATCH,
  HEAD,
  OPTIONS;

  @DoNotStrip
  @Keep
  private val _ordinal = ordinal
}
