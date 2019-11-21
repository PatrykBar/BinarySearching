#include <iostream>

int searchBinary(int* tab, int first, int last, int number)
{
    int mid =((first+last)/2);

	if (tab[mid] == number)
    {
        return mid;
    }

    else if (tab[mid] < number)
    {
        searchBinary(tab, mid, last, number);
    }

    else if (tab[mid] > number)
    {
        searchBinary(tab, first, mid, number);
    }
    else
    {
        return -1;
    }
}
