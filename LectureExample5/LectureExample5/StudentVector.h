#ifndef STUDENTVECTOR_H
#define STUDENTVECTOR_H
#include <vector>
#include <iostream>
#include "Student.h"
using namespace std;
class StudentVector 
{
protected:
	vector<Student*> m_StudentVector;
public:
	StudentVector() {}
	StudentVector(vector<Student*>& studentVector) 
	{
		m_StudentVector = studentVector;
	}


	void addStudent( Student* student)
	{
		m_StudentVector.push_back(student);
	}

	
	virtual Student* getStudent(int i)const
	{
		return m_StudentVector[i];
	}
	virtual void print()const
	{
		for (Student* s : m_StudentVector)
			s->print();
		cout << endl;
	}

};



#endif
