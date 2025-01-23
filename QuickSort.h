#pragma once
#include <vector>

template <template<typename> typename V, typename K, typename I>
void quickSort(V<K>& v, I left, I right)
{
    if (left >= right) return;
    
    auto l = left;
    auto r = right - 1;
    auto p = right;
    auto pivot = *p;

    while (l < r)
    {
        while (*l < pivot and l < r) l += 1;
        
        while (*r >= pivot and r > l) r -= 1;

        if (l < r)
        {
            int tmp;
            tmp = *l;
            *l = *r;
            *r = tmp;
        }
            
    }
        
    if (*l > pivot)
    {
        int tmp;
        tmp = *l;
        *l = *p;
        *p = tmp;
    }
        

    quickSort(v, left, l - 1);
    quickSort(v, l + 1, right);
}