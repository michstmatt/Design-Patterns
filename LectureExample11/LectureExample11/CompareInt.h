#ifndef COMPAREINT_H
#define COMPAREINT_H

#include "SubStringInterface.h"
#include <vector>
using namespace std;
class CompareInt : public SubStringInterface {
private:
	vector<int> setA;
	vector<int> setB;
public:
	CompareInt(const vector<int>& a, const vector<int>& b) : setA(a), setB(b) {};

	virtual unsigned int getSizeA() const { return setA.size(); }
	virtual unsigned int getSizeB() const { return setB.size(); }


	virtual bool isEqual(int i, int j) const {
		return setA[i] == setB[j];
	}



};


#endif 
