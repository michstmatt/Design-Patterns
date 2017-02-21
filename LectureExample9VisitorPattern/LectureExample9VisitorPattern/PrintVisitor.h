#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H
//#include "Visitor.h"
//#include "Entity.h"
//#include "File.h"
//#include  "Directory.h"
//using namespace std;


class PrintVisitor :public Visitor
{
public:
	PrintVisitor() {};
	virtual void VisitFile(File* f)
	{
		cout << "(File: " << f->getName() << "; Size: " << f->getSize() <<")"<< endl;
		
	}
	virtual void VisitDirectory(Directory* d)
	{
		cout << "Directory: " << d->getName() << "; Size: " << d->getSize()<<endl;
		for (unsigned int i = 0; i < d->getChildrenSize(); i++)
		{
			
			d->getChild(i)->Accept(this);
		}
	}
};


#endif