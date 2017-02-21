#include <iostream>
#include <cstdlib>
#include <vector>
#include "Employee.h"
#include "Manager.h"
using namespace std;

int main(int arc, char** argv)
{
	Employee JohnSmith1("John", "Smith1", "Sales", 2010);
	Employee JohnSmith2("John", "Smith2", "Sales", 2010);
	Employee JohnSmith3("John", "Smith3", "Sales", 2010);

	vector<Employee*> salesEmployees;
	salesEmployees.push_back(&JohnSmith1);
	salesEmployees.push_back(&JohnSmith2);
	salesEmployees.push_back(&JohnSmith3);

	
	Manager TomCruiseManager("Tom", "Cruise", "Sales", 2000,salesEmployees, 2);




	Employee JohnDoe1("John", "Doe1", "Human Resources", 2010);
	Employee JohnDoe2("John", "Doe2", "Human Resources", 2010);
	Employee JohnDoe3("John", "Doe3", "Human Resources", 2010);

	vector<Employee*> hrEmployees;
	hrEmployees.push_back(&JohnDoe1);
	hrEmployees.push_back(&JohnDoe2);
	hrEmployees.push_back(&JohnDoe3);

	
	Manager AliceCoopeManager("Alice", "Cooper", "Human Resources", 2000,hrEmployees, 2);

	vector<Employee*>allEmployees;
	allEmployees.push_back(&JohnSmith1);
	allEmployees.push_back(&JohnSmith2);
	allEmployees.push_back(&JohnSmith3);
	allEmployees.push_back(&JohnDoe1);
	allEmployees.push_back(&JohnDoe2);
	allEmployees.push_back(&JohnDoe3);

	
	allEmployees.push_back(&TomCruiseManager);
	allEmployees.push_back(&AliceCoopeManager);

	for (Employee* e : allEmployees)
		e->print();

	

	int wait;
	cin >> wait;
	
	return 0;
}