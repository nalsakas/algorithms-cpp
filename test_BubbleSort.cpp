#include <iostream>
using namespace std;

#include <catch2/catch_test_macros.hpp>
#include "BubbleSort.h"


TEST_CASE( "BubbleSort", "[BubbleSort]" ) {
    
    int a[] = {1, 9, 2, 8 ,3 ,7, 4, 6, 5 ,0};
    int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    bubbleSort(a, sizeof(a) / sizeof(a[0]));
    for(int i = 0; i < 10; i++)
    {
        REQUIRE(a[i] == b[i]);
    }
}