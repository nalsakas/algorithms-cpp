#pragma once
#include <vector>

void SelectSort(std::vector<int>& array)
{
    for (int k = 0; k < array.size() - 1; k++)
    {
        int i = k;
        int j = k;

        while (j < array.size())
        {
            i = j;
            while(array[j] >= array[i]) j += 1;
        }

        int tmp;
        tmp = array[k];
        array[k] = array[i];
        array[i] = tmp;
    }
}