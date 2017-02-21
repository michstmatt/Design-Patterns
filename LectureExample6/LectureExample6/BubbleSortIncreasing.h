#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H
#include "BubbleSortTemplate.h"
#include "SortableVector.h"

class BubbleSortIncreasing :public BubbleSortTemplate
{
public:
	bool needSwap(SortableVector* sortableVector, int i, int j)
	{
		return !sortableVector->smaller(i, j);
	}

};




#endif