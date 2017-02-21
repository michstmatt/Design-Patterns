#ifndef NORMALIZATIONSCALE_H
#define NORMALIZATIONSCALE_H
#include <cstdlib>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include "NormalizationTemplate.h"

using namespace std;

class NormalizationScale :public NormalizationTemplate
{


public:
	virtual vector<float> getNumerator(vector<int>* data)
	{
		vector<float> numerator;
		int min = *min_element(data->begin(), data->end());
		for (int i : *data)
			numerator.push_back(i - min);
		return numerator;
	}

	virtual  float getDenominator(vector<int>* data)
	{
		return *max_element(data->begin(), data -> end()) - *min_element(data->begin(), data->end());
	}
};






#endif