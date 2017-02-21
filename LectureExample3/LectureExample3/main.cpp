#include <cstdlib>
#include <iostream>
using namespace std;

class A 
{
public:
	int publicDataInA;
protected:
	int protectedDataInA;
private:
	int privateDataInA;

public:
	A(int a, int b, int c) :publicDataInA(a), protectedDataInA(b), privateDataInA(c) {}
};

class PublicB :public A
{
public:
	PublicB(int a, int b, int c) :A(a, b, c) {}
	void print()
	{
		cout << publicDataInA << endl;
		cout << protectedDataInA << endl;
	}
};

class ProtectedB :protected A
{
public:
	ProtectedB(int a, int b, int c) :A(a, b, c) {}
	void print()
	{
		cout << publicDataInA << endl;
		cout << protectedDataInA << endl;
	}
};
class PrivateB :private A
{
public:
	PrivateB(int a, int b, int c) :A(a, b, c) {}
	void print()
	{
		cout << publicDataInA << endl;
		cout << protectedDataInA << endl;
	}
};
class C :public ProtectedB
{
public:
	C(int a,int b, int c):ProtectedB(a,b,c){}
	void print()
	{
		cout << publicDataInA << endl;
		cout << protectedDataInA << endl;
	}
};


int main(int argc,char** argv)
{
	A objA(1, 2, 3);
	//cout << objA.publicDataInA << endl;

	PublicB objPublicB(10, 20, 30);
	//cout << objPublicB.publicDataInA << endl;

	ProtectedB objProtectedB(10, 20, 30);

	PrivateB objPrivateB(10, 20, 30);

	C objC(100, 200, 300);
	
	A *aPtr;
	aPtr = &objPublicB;
	

	cin >> argc;
	return 0;
}