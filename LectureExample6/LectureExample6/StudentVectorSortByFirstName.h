#ifndef STUDENTVECTORSORTBYFIRSTNAME_H
#define STUDENTVECTORSORTBYFIRSTNAME_H
#include "StudentVectorSortable.h"

class StudentVectorSortByFirstName:public StudentVectorSortable
{
public:
	StudentVectorSortByFirstName(vector<Student*>& studentVector) :StudentVectorSortable(studentVector) {}
	virtual bool smaller(int i, int j) const
	{
		return getStudent(i)->getFirstName()<getStudent(j)->getFirstName();
	}
};




#endif
