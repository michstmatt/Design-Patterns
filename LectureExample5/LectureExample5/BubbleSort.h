#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "SortableVector.h"

class BubbleSort 
{
public:
	void sortDecreasing(SortableVector* sortableVector)
	{
		bool sorted = false;
		int n = sortableVector->getSize();
		while (!sorted)
		{
			sorted = true;
			for (int i = 1; i < n; i++)
				if (sortableVector->smaller(i - 1, i))
				{
					sortableVector->swap(i - 1, i);
					sorted = false;
				}
			n--;
		}
	}
	void sortIncreasing(SortableVector* sortableVector)
	{
		bool sorted = false;
		int n = sortableVector->getSize();
		while (!sorted)
		{
			sorted = true;
			for (int i = 1; i < n; i++)
				if (!sortableVector->smaller(i - 1, i))
				{
					sortableVector->swap(i - 1, i);
					sorted = false;
				}
			n--;
		}
	}


	/*void sortDecreasingFaster(SortableVector* sortableVector)
	{
		bool sorted = false;
		int i = 0;
		while (!sorted && (i < sortableVector->getSize()))
		{
			sorted = true;
			for (int j = i; j < sortableVector->getSize() - 1; j++)
				if (sortableVector->smaller(j, j + 1)) 
				{
					sortableVector->swap(j, j + 1);
					sorted = false;
				}
			i++;
			
		}
	}*/

	/*void sortIncreasing(SortableVector* sortableVector)
	{
		for (int i = 0; i < sortableVector->getSize(); i++)
			for (int j = i; j < sortableVector->getSize() - 1; j++)
				if (!sortableVector->smaller(j, j + 1))
					sortableVector->swap(j, j + 1);
	}*/

	/*void sortIncreasingFaster(SortableVector* sortableVector)
	{
		bool sorted = false;
		int i = 0;
		while (!sorted && (i < sortableVector->getSize()))
		{
			sorted = true;
			for (int j = i; j < sortableVector->getSize() - 1; j++)
				if (!sortableVector->smaller(j, j + 1))
				{
					sortableVector->swap(j, j + 1);
					sorted = false;
				}
			i++;
		}
	}*/

};



#endif