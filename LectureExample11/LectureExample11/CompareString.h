#ifndef COMPARESTRING_H
#define COMPARESTRING_H

#include "SubStringInterface.h"
#include <vector>
#include <string>
using namespace std;
class CompareString : public SubStringInterface {
private:
	vector<char> setA;
	vector<char> setB;
public:
	CompareString(const vector<char>& a, const vector<char>& b) : setA(a), setB(b) {};

	virtual unsigned int getSizeA() const { return setA.size(); }
	virtual unsigned int getSizeB() const { return setB.size(); }


	virtual bool isEqual(int i, int j) const {
		return setA[i] == setB[j];
	}



};


#endif 
