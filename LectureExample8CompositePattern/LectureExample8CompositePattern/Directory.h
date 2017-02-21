#ifndef DIRECTORY_H
#define DIRECTORY_H
#include "Entity.h"
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Directory :public Entity
{
protected:
	vector<Entity*> entries;
public:
	Directory(const string& name) :Entity(name, 0) {}

	virtual void addEntity(Entity* entry)
	{
		entries.push_back(entry);
		m_size += entry->getSize();
	}

	virtual void removeEntity(Entity* entry)
	{
		remove(entries.begin(), entries.end(), entry);
		m_size -= entry->getSize();
	}
	virtual Entity* getChild(int i)const
	{
		return entries[i];
	}

	virtual unsigned int getChildrenSize()
	{
		return entries.size();
	}

	virtual void print()const
	{
		cout << "Directory " << m_name << " contains:("<<endl;
		for (Entity* e : entries)
		{
		
			e->print();
			cout << endl;
		}
		cout << ");"<<endl;
	}

};


#endif 