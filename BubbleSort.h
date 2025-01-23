#pragma once

void bubbleSort(int a[], int length)
{
    int i = 0;
    int j = length;

    while (j)
    {
        while (i < j - 1)
        {
            if (a[i] > a[i + 1])
            {
                int tmp;
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
            i += 1;
        }

        j -= 1;
        i = 0;
    }
}