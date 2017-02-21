#ifndef NORMALIZATIONSTANDARDIZE_H
#define NORMALIZATIONSTANDARDIZE_H
#include <cstdlib>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include "NormalizationTemplate.h"
using namespace std;

class NormalizationStandardize:public NormalizationTemplate
{
protected:
	float Mean(vector<int>* data)
	{
		float sum = 0;

		for (int i : *data)
			sum += i;

		return sum / (float)data->size();
	}
public:


	virtual vector<float> getNumerator(vector<int>* data)
	{
		vector<float> numerator;
		
		
		float mean = Mean(data);
		for (int i : *data)
			numerator.push_back(i - mean);

		return numerator;
			
	}

	virtual float getDenominator(vector<int>* data)
	{
		vector<float> shifted = getNumerator(data);
		float sum = 0;
		for (float f : shifted)
			sum += sum + powf(f, 2);
		return sqrtf(sum / (float)shifted.size());
	}

};


#endif