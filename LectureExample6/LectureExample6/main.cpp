#include <cstdlib>
#include <vector>
#include <iostream>
#include "SortableVector.h"
#include "BubbleSortTemplate.h"
#include "BubbleSortDecreasing.h"
#include "BubbleSortIncreasing.h"
#include "IntegerVector.h"
#include "Student.h"
#include "StudentVector.h"
#include "StudentVectorSortByFirstName.h"
#include "StudentVectorSortByGPA.h"
using namespace std;
int main(int argc, char ** argv)
{
	IntegerVector iv;
	iv.addInteger(10);
	iv.addInteger(4);
	iv.addInteger(6);
	iv.addInteger(3);
	cout << "Before sort:\n";
	iv.print();

	BubbleSortDecreasing bsd;
	bsd.sort(&iv);
	cout << "Decreasing:\n";
	iv.print();
	/*bs.sortIncreasing(&iv);
	cout << "Increasing:\n";
	iv.print();*/


	Student s1("Henry", "Smith", 1996, 150, 0.5);
	Student s2("John", "Anderson", 1995, 160, 4.0);
	Student s3("Tom", "Cooper", 1997, 120, 3.0);

	vector<Student*> studentVector;
	studentVector.push_back(&s1);
	studentVector.push_back(&s2);
	studentVector.push_back(&s3);
	StudentVector sv(studentVector);


	StudentVectorSortByGPA svSortedByGPA(studentVector);
	cout << endl << "Before" << endl;
	svSortedByGPA.print();


	bsd.sort(&svSortedByGPA);
	cout << endl << "Decreasing by GPA" << endl;
	svSortedByGPA.print();

	/*bs.sortIncreasing(&svSortedByGPA);
	cout << endl << "Increasing by GPA" << endl;
	svSortedByGPA.print();*/


	StudentVectorSortByFirstName svSortedByFirstName(studentVector);
	cout << endl << "Before" << endl;
	svSortedByFirstName.print();

	bsd.sort(&svSortedByFirstName);
	cout << endl << "Decreasing by First Name" << endl;
	svSortedByFirstName.print();

	/*bs.sortIncreasing(&svSortedByFirstName);
	cout << endl << "Increasing by First Name" << endl;
	svSortedByFirstName.print();*/
	return 0;
}