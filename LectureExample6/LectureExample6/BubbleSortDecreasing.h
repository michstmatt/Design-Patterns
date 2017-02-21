#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H
#include "BubbleSortTemplate.h"
#include "SortableVector.h"

class BubbleSortDecreasing :public BubbleSortTemplate
{
public:
	bool needSwap(SortableVector* sortableVector, int i, int j) 
	{
		return sortableVector->smaller(i, j);
	}

};




#endif