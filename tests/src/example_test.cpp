#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

TEST_CASE("Test Example", "[test]")
{
  int i = 1;
  REQUIRE(i == 1);
}
