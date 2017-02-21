#ifndef VISITOR_H
#define VISTOR_H
class File;
class Directory;

class Visitor
{
public:

	virtual void VisitDirectory(Directory*) = 0;
	virtual void VisitFile(File*) = 0;
};



#endif