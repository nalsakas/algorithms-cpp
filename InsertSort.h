#pragma once
#include <vector>

void InsertSort(std::vector<int>& array)
{
    for (int i = 1; i < array.size(); i++)
    {
        int j = i;

        while (j > 0 && array[j] < array[j - 1])
        {
            int tmp;
            tmp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = tmp;

            j -= 1;
        }
    }
}