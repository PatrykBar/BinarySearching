#include <iostream>
#include <algorithm>

void quicksort(int *tab, int left, int right)
{
    int i = left;
    int j = right;
    int x = tab[(left+right)/2];

    do
    {
        while (tab[i]<x) i++;
        while (tab[j]>x) j--;

        if(i<=j)
        {
            std::swap (tab[i], tab[j]);
            i++;
            j--;
        }

    }while(i<=j);

    if(left<i) quicksort(tab, left, j);
    if(right>i) quicksort(tab, i, right);
}


