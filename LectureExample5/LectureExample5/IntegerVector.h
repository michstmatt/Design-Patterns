#ifndef INTEGERVECTOR_H
#define INTEGERVECTOR_H

#include "SortableVector.h"
#include <vector>
#include <iostream>
using namespace std;
class IntegerVector :public SortableVector
{
protected:
	vector<int> m_IntegerVector;

public:
	void addInteger(int i) 
	{
		m_IntegerVector.push_back(i);
	}


	virtual unsigned int getSize() const 
	{
		return m_IntegerVector.size();
	}

	virtual bool smaller(int i,int j ) const
	{
		return m_IntegerVector[i] < m_IntegerVector[j];
	}

	virtual void swap(int i, int j)
	{
		int temp = m_IntegerVector[i];
		m_IntegerVector[i] = m_IntegerVector[j];
		m_IntegerVector[j] = temp;
	}

	virtual void print() const
	{
		for (auto i : m_IntegerVector)
			cout << i << "\t";
		cout << "\n";
	}


	IntegerVector(const vector<int>& v)
	{
		m_IntegerVector = v;
	}
	IntegerVector() {

	}
};


#endif
