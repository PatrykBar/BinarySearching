#include <iostream>
#include <time.h>
#include "quicksort.h"
#include "searchBinary.h"

int searchBinary(int* tab, int first, int last, int number);
void quicksort(int *tab, int left, int right);

int main()
{
	int x;
	std::cout << "Size of tab: ";
	std::cin >> x;

	int *tab = new int [x];

	std::cout << "Do you want to set number of generate them automatically (A-auto/M-manually): ";
	char choice;
	std::cin >> choice;

	while (choice == 'A' || choice == 'M')
	{
		if (choice == 'A')
		{
			srand(time(NULL));
			std::cout << "AUTO" << std::endl;
			for (int i = 0; i < x; i++)
			{
				tab[i] = rand();
			}
			for (int i=0; i<x; i++)
            {
                std::cout << tab[i] << ", ";
            }

            std::cout << std::endl;
            std::cout << x ;
            std::cout << std::endl;

            quicksort(tab, 0, x-1);

            std::cout << "After sorting: " << std::endl;
            for (int i=0; i<x; i++)
            {
                std::cout << tab[i] << ", ";
            }
            std::cout << std::endl;
            break;
		}
		else if (choice == 'M')
		{
		    std::cout << "MANUALLY" << std::endl;
			for (int i = 0; i < x; i++)
			{
				std::cout << "Number " << i + 1 << " : ";
				std::cin >> tab[i];
			}

            quicksort(tab, 0, x-1);

            break;
		}
		else
		{
			std::cout << "Wrong choice";
			continue;
		}
	}

	int p;
	std::cout << std::endl;
	std::cout << "Search number: ";
	std::cin >> p;
	std::cout << std::endl;

	std::cout << "Searching  number is on the: ";
	int wynik = searchBinary(tab, 0, x, p);

    std::cout << wynik+1 << " position" << std::endl;
	
	delete[] tab;
	return 0;
}
