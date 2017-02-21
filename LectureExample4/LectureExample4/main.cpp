#include <cstdlib>
#include <iostream>
#include <string>
#include "Base.h"
#include "Derived.h"
using namespace std;

void f()
{
	cout << "in function : ";
	Derived derivedObj(3, "Alice","Cooper", "Sales", 2013);
}

int main(int argc, char** argv)
{
	Derived derivedObj1(2, "John", "Smith", "Sales", 2010);
	f();
	return 0;
}