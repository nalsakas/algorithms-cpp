#include <catch2/catch_test_macros.hpp>
#include "String2.h"
using namespace std;

TEST_CASE( "String tests", "[string]" ) {
    String2 s1 = "Hello world";
    String2 s2;

    REQUIRE(s1 == "Hello world");
    REQUIRE(s2 == "");

    s2 = move(s1);

    REQUIRE(s1 == "");
    REQUIRE(s2 == "Hello world");
}