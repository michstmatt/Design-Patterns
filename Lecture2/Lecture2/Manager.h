#ifndef MANAGER_H
#define MANAGER_H

#include <vector>;
#include "Employee.h"
using namespace std;

class Manager: public Employee
{
protected:
	
	vector<Employee*> m_Group;
	unsigned short m_Level;
public:
	Manager(const string firstName, const string lastName, const string departmentName, const unsigned short hiringYear, const vector<Employee*>& group, const unsigned short level)
		:Employee(firstName,lastName,departmentName,hiringYear)
	{
		m_Group = group;
		m_Level = level;
	}

	virtual void print() const 
	{
		Employee::print();
		for (const Employee* e : m_Group)
		{
			cout << '\t';
			e->print();
		}
			
	}
};


#endif
