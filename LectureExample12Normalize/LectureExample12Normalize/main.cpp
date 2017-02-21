#include <cstdlib>
#include <iostream>
#include <vector>
#include "NormalizationStandardize.h"
#include "NormalizationScale.h"

using namespace std;


int main(int argc, char ** argv)
{
	NormalizationStandardize standardizeAlgorithm;
	NormalizationScale scaleAlgorithm;
	//vector<int> data = { 9,10,11,13,15,5 };
	vector<int> data = { 100,50,50,10,10,100,20,1 };
	vector<float> norm;
	norm = standardizeAlgorithm.normalize(&data);

	cout << "Standardize:" << endl;
	for (float f : norm)
		cout << f << " " << endl;
	
	
	cout <<endl<< "Scale:" << endl;
	norm = scaleAlgorithm.normalize(&data);
	for (float f : norm)
		cout << f << " " << endl;

	return 0;



	
}