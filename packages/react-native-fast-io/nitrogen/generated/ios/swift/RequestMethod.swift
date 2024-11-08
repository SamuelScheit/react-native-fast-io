///
/// RequestMethod.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

/**
 * Represents the JS union `RequestMethod`, backed by a C++ enum.
 */
public typealias RequestMethod = margelo.nitro.fastio.RequestMethod

public extension RequestMethod {
  /**
   * Get a RequestMethod for the given String value, or
   * return `nil` if the given value was invalid/unknown.
   */
  init?(fromString string: String) {
    switch string {
      case "POST":
        self = .post
      case "GET":
        self = .get
      default:
        return nil
    }
  }

  /**
   * Get the String value this RequestMethod represents.
   */
  var stringValue: String {
    switch self {
      case .post:
        return "POST"
      case .get:
        return "GET"
    }
  }
}
