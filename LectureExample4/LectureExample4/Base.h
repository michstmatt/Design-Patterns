#ifndef BASE_H
#define BASE_H
#include "Employee.h"
using namespace std;

class Base 
{
protected:
	int m_Num;
	Employee* m_EmployeePtr;
private:
	Base() {}

public:
	Base(const int num, const string& firstName, const string& lastName, const string& departmentName, const int hiringYear)
	{
		m_Num = num;
		m_EmployeePtr = new Employee(firstName, lastName, departmentName, hiringYear);
		cout << "In Base Constructor: " << firstName << endl;

	}
	Base(const Base& b)
	{
	    m_Num = b.m_Num;
		m_EmployeePtr = new Employee(b.m_EmployeePtr->getFirstName(), b.m_EmployeePtr->getLastName(), b.m_EmployeePtr->getDepartmentName(), b.m_EmployeePtr->getHiringYear());
	}

	virtual ~Base()
	{
		cout << "In Base Destructor: " << m_EmployeePtr->getFirstName() << endl;
		delete m_EmployeePtr;
	}

	Base& operator=(const Base& b)
	{
		m_Num = b.m_Num;
		m_EmployeePtr = new Employee(b.m_EmployeePtr->getFirstName(), b.m_EmployeePtr->getLastName(), b.m_EmployeePtr->getDepartmentName(), b.m_EmployeePtr->getHiringYear());
		return *this;
	}

	int getNum() const
	{
		return m_Num;
	}

	Employee* getEmployeePtr() const
	{
		return m_EmployeePtr;
	}


};





#endif