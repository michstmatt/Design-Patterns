#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;


class Employee
{
protected:
	string m_FirstName;
	string m_LastName;
	string m_DepartmentName;
	unsigned short m_HiringYear;

public:
	Employee(const string firstName, const string lastName, const string departmentName, const unsigned short hiringYear) 
	{
		m_FirstName = firstName;
		m_LastName = lastName;
		m_DepartmentName = departmentName;
		m_HiringYear = hiringYear;
	}
	Employee()
	{
		m_FirstName = "";
		m_LastName = "";
		m_DepartmentName = "";
		m_HiringYear = 0;
	}

	//Accessors
	string getFirstName() const
	{
		return m_FirstName;
	}

	string getLastName() const
	{
		return m_LastName;
	}

	string getDepartmentName() const
	{
		return m_DepartmentName;
	}

	unsigned short getHiringYear() const
	{
		return m_HiringYear;
	}

	//Setters
	void setFirstName(const string firstName)
	{
		m_FirstName = firstName;
	}
	
	void setLastName(const string lastName)
	{
		m_LastName = lastName;
	}

	void setDepartmentName(const string departmentName)
	{
		m_DepartmentName = departmentName;
	}
	
	void setHiringYear(const unsigned short hiringYear)
	{
		m_HiringYear = hiringYear;
	}

	virtual void print() const
	{
		cout << m_FirstName << " " << m_LastName << "; " << m_DepartmentName << "; " << m_HiringYear << endl;
	}

};

#endif
