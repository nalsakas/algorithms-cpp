#include <vector>
#include <iostream>
#include <vector>
using namespace std;

#include <catch2/catch_test_macros.hpp>
#include "QuickSort.h"

vector a = {3,2,1, 55, 32, 16, 78, 90, 54};

TEST_CASE( "Quick sort", "[QuickSort]" ) {
    
    quickSort<vector, int, vector<int>::iterator>(a, a.begin(), a.end() - 1);

    vector b {1,2,3,16,32,54,55,78,90};
    REQUIRE(a == b);
}