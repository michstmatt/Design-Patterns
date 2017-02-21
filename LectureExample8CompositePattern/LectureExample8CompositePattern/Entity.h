#ifndef ENTITY_H
#define ENTITY_H
#include <string>
using namespace std;
class Entity
{
protected:
	string m_name;
	unsigned int m_size;
	Entity(const string& name, const unsigned int size) :m_name(name), m_size(size) {}
public:
	virtual string getName()const
	{
		return m_name;
	}
	virtual unsigned int getSize() const
	{
		return m_size;
	}
	virtual void print()const{}
};





#endif