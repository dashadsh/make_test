// test_math_functions.cpp
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "math_functions.h"

TEST_CASE("Addition works", "[add]") {
    REQUIRE(add(2, 2) == 4);
    REQUIRE(add(-1, 1) == 0);
}

TEST_CASE("Subtraction works", "[subtract]") {
    REQUIRE(subtract(2, 2) == 0);
    REQUIRE(subtract(2, 1) == 1);
}
