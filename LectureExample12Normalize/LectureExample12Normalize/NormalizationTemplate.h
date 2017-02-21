#ifndef NORMALIZATIONTEMPLATE_H
#define NORMALIZATIONTEMPLATE_H

#include <cstdlib>
#include <vector>


using namespace std;

class NormalizationTemplate {
public:
	virtual vector<float> getNumerator(vector<int>*) = 0;
	virtual float getDenominator(vector<int>*) = 0;
	vector<float> normalize(vector<int>* data)
	{
		vector<float> numerator = getNumerator(data);
		float denominator = getDenominator(data);
		vector<float> normalizedData;

		for (float f : numerator)
			normalizedData.push_back(f / denominator);

		return normalizedData;
		
	}


};




#endif