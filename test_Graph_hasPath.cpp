#include <iostream>
using namespace std;

#include <catch2/catch_test_macros.hpp>
#include "Graph_hasPath.h"

Graph graph = {
    {'a', {'b', 'c'}},
    {'b', {'d'}},
    {'c', {'e'}},
    {'d', {'f'}},
    {'e', {}},
    {'f', {}}
};

TEST_CASE( "Graph has path", "[Graph]" ) {
    REQUIRE( hasPath(graph, 'a', 'f') == true);
    REQUIRE( hasPath(graph, 'f', 'a') == false);
}