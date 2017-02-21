#ifndef FILE_H
#define FILE_H
#include "Entity.h"
#include <string>
#include <iostream>
using namespace std;

class File :public Entity
{
public:
	File(const string& name, const unsigned int size) :Entity(name, size) {}
	virtual void print()const
	{
		cout << "(file name=" << m_name << ", file size=" << m_size << ")";
	}
};
#endif
