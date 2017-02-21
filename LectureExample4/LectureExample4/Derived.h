#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

using namespace std;
class Derived :public Base
{
public:
	Derived(const int num, const string& firstName, const string& lastName, const string& departmentName, const int hiringYear):Base(num,firstName,lastName,departmentName,hiringYear)
	{
		cout << "In Derived Constructor: " << firstName << endl;
	}
	virtual ~Derived()
	{
		cout << "In Derived Destructor: " << m_EmployeePtr->getFirstName() << endl;
	}

};




#endif
