#ifndef SUMVISITOR_H
#define SUMVISITOR_H
//#include "Visitor.h"
//#include "Entity.h"
//#include "File.h"
//using namespace std;
class SumVisitor :public Visitor
{
protected:
	int size;
public:
	SumVisitor() { size = 0; };
	virtual void VisitFile(File* f)
	{
		size += f->getSize();
	}
	virtual void VisitDirectory(Directory* d)
	{
		for (unsigned int i = 0; i < d->getChildrenSize(); i++)
		{
			d->getChild(i)->Accept(this);
		}
	}
	virtual int getSize() const
	{
		return size;
	}

};




#endif