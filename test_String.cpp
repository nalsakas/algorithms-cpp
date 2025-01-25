#include "String.h"
#include <assert.h>
#include <iostream>

int main()
{
    my::String s1 = "Hello world";
    my::String s2;

    assert(s1 == "Hello world");
    assert(s2 == "");

    s2 = std::move(s1);

    assert(s1 == "");
    assert(s2 == "Hello world");
    
    return 0;
}