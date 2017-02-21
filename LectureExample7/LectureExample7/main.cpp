#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

template <typename T> void swapArgs(T& a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

class IntegerVector 
{
protected:
	vector<int> m_IntegerVector;

public:
	void addInteger(int i)
	{
		m_IntegerVector.push_back(i);
	}


	virtual unsigned int getSize() const
	{
		return m_IntegerVector.size();
	}

	virtual bool smaller(int i, int j) const
	{
		return m_IntegerVector[i] < m_IntegerVector[j];
	}

	virtual void swap(int i, int j)
	{
		int temp = m_IntegerVector[i];
		m_IntegerVector[i] = m_IntegerVector[j];
		m_IntegerVector[j] = temp;
	}

	virtual void print() const
	{
		for (auto i : m_IntegerVector)
			cout << i << "\t";
		cout << "\n";
	}


	IntegerVector(const vector<int>& v)
	{
		m_IntegerVector = v;
	}
	IntegerVector() {

	}
};


template <typename T>void SortDecreasing(T* items)
{
	bool sorted = false;
	int n = items->getSize();
	while (!sorted)
	{
		sorted = true;
		for (int i = 1; i < n; i++)
			if (items->smaller(i - 1, i))
			{
				items->swap(i - 1, i);
				sorted = false;
			}
		n--;
	}
}


template<class StackType, int StackSize> class Stack
{
protected:
	StackType items[StackSize];
	int top;
public:
	Stack(){top = 0;}

	bool push(StackType element)
	{
		if (top == StackSize)
			return false;
		else
		{
			items[top] = element;
			top++;
			return true;
		}
	}

	StackType pop()
	{
		if (top == 0)
			return 0;
		else
		{
			top--;
			return items[top];
		}
	}

};




int main(int argc, char ** argv)
{
	int a = 10, b = 20;
	cout << a << "\t" << b << "\n";
	swapArgs(a, b);
	cout << a << "\t" << b << "\n";

	vector<int> intVec;
	intVec.push_back(5);
	intVec.push_back(4);
	intVec.push_back(6);
	intVec.push_back(10);

	IntegerVector integerDatabase(intVec);
	cout << "Before sorting decreasing\t";
	integerDatabase.print();
	SortDecreasing(&integerDatabase);
	cout << "After sorting decreasing\t";
	integerDatabase.print();

	Stack<char, 4>s1;
	s1.push('a');
	s1.push('b');
	s1.push('c');
	s1.push('d');

	while (char c = s1.pop())
	{
		cout << c << "\t";
	}
	cout << endl;

	

	return 0;
}