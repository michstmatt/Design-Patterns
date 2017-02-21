#ifndef STUDENTVECTORSORTBYGPA_H
#define STUDENTVECTORSORTBYGPA_H
#include "StudentVectorSortable.h"

class StudentVectorSortByGPA: public StudentVectorSortable
{
public:
	StudentVectorSortByGPA(vector<Student*>& studentVector) :StudentVectorSortable(studentVector) {}
	virtual bool smaller(int i, int j)const
	{
		return getStudent(i)->getGPA() < getStudent(j)->getGPA();
	}
};



#endif
