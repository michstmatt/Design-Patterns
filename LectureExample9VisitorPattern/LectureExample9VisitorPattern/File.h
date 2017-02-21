#ifndef FILE_H
#define FILE_H

#include "Entity.h"

#include <iostream>
//#include "Visitor.h"

//using namespace std;

class File :public Entity
{
public:
	File(const string& name, const unsigned int size) :Entity(name, size) {}
	virtual void print()const
	{
		cout << "(file name=" << m_name << ", file size=" << m_size << ")";
	}
	virtual void Accept(Visitor* v)
	{
		v->VisitFile(this);
	}
};
#endif
