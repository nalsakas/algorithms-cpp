#include <catch2/catch_test_macros.hpp>
#include "MergeSort.h"
using namespace std;


TEST_CASE( "Sorting tests", "[Sorting]" ) {
    vector<int> arr = {9, 5, 7, 4, 56, 25, 3, 7};
    vector<int> target = {3, 4, 5, 7, 7, 9, 25, 56};
    
    mergeSort(arr);
    REQUIRE( arr == target);
}