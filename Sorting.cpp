#include <iostream>
#include <vector>
using namespace std;

#include "Sorting.h"

void mergeSort(vector<int>& array)
{
    if (array.size() <= 1) return;

    int middle = array.size() / 2;

    vector<int> left(array.begin(), array.begin() + middle);
    vector<int> right(array.begin() + middle, array.end());

    mergeSort(left);
    mergeSort(right);

    int i = 0;
    int l = 0;
    int r = 0;
    while (l < left.size() && r < right.size())
    {
        if (left[l] < right[r])
        {
            array[i] = left[l];
            l++, i++;
        } else {
             array[i] = right[r];
            r++, i++;
        }
    }

    while (l < left.size())
    {
        array[i] = left[l];
        l++, i++;
    }

    while (r < right.size())
    {
        array[i] = right[r];
        r++, i++;
    }
}
