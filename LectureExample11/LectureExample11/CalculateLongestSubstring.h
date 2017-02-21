#ifndef CALCULATELONGESTSUBSTRING_H
#define CALCULATELONGESTSUBSTRING_H

#include "SubStringInterface.h"
using namespace std;

class CalculateLongestSubString {
private:
	int max(int a, int b) {
		return (a > b) ? a : b;
	}
public:

	int LCSubStr(SubStringInterface* sub)
	{
	    const unsigned int len1 = sub->getSizeA()+1;
	    const unsigned int len2 = sub->getSizeB()+1;
		int* count= new int[len1][len2];
		int result = 0;
		

		for (int i = 0; i < len1; i++)
		{
			for (int j = 0; j < len2; j++)
			{

				if (i == 0 || j == 0) 
					count[i][ j] = 0;
				
				else if (sub->isEqual(i - 1, j - 1)) {
					count[i][j] = count[i - 1][j - 1] + 1;
					result = max(result, count[i][j]);
				}
				else
					count[i][j];
			}
		}

		return result;
	
	}




};





#endif