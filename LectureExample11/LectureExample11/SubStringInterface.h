#ifndef SUBSTRINGINTERFACE_H
#define SUBSTRINGINTERFACE_H


class SubStringInterface {
public:
	virtual unsigned int getSizeA() const = 0;
	virtual unsigned int getSizeB() const = 0;
	virtual bool isEqual(int, int) const = 0;


};



#endif 