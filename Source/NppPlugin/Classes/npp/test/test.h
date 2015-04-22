#pragma once

#include <stdio.h>
#include <vector>
#include <functional>

namespace npp {

  namespace test {

    /// A unit test static function type
    using Test = std::function< void(bool&) >;

    /// Trace some value, using printf like syntax: TRACE("%d", 100);
    #define TRACE(...) \
      printf("\n: "); \
      printf(__VA_ARGS__); \
      fflush(stdout);

    /// Define a test value
    #define DEFINE_TEST(name) void name(bool &success)

    /// Add a test to the current test scope by name
    #define TEST(name) this->Test(#name, &name);

    /// Asset some truth value
    #define ASSERT(truth) \
      if (!(truth)) { \
        TRACE("%s:%d ", __FILE__, __LINE__); \
        success = false; \
        return; \
      }

    /// Unreachable code, for tests
    #define UNREACHABLE ASSERT(false)
  }
}
