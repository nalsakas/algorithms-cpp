#include <map>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

#include <catch2/catch_test_macros.hpp>
#include "Graph_DFS.h"

map<char, vector<char>> graph = {
    {'a', {'b', 'c'}},
    {'b', {'d'}},
    {'c', {'e'}},
    {'d', {'f'}},
    {'e', {}},
    {'f', {}}
};

TEST_CASE( "Depthfirst Iteration", "[Graph]" ) {
    stringstream ss;
    streambuf* old = cout.rdbuf(ss.rdbuf());

    depthFirstPrint(graph, 'a');

    REQUIRE(ss.str() == "a\nc\ne\nb\nd\nf\n");

    cout.rdbuf(old);
}

TEST_CASE( "DepthfirstRecursive Iteration", "[Graph]" ) {
    stringstream ss;
    streambuf* old = cout.rdbuf(ss.rdbuf());

    depthFirstRecursivePrint(graph, 'a');

    REQUIRE(ss.str() == "a\nb\nd\nf\nc\ne\n");

    cout.rdbuf(old);
}

TEST_CASE( "BreathFirst Iteration", "[Graph]" ) {
    stringstream ss;
    streambuf* old = cout.rdbuf(ss.rdbuf());

    breadhFirstPrint(graph, 'a');

    REQUIRE(ss.str() == "a\nb\nc\nd\ne\nf\n");
    
    cout.rdbuf(old);
}
