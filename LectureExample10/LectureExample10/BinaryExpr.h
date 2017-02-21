#ifndef BINARYEXPR_H
#define BIANRYEXPR_H
#include "Expr.h"



class BinaryExpr :public Expr
{
private:
	Expr* rightChild;
	Expr* leftChild;
protected:

	BinaryExpr(Expr* r, Expr* l) :rightChild(r), leftChild(l) {};
	virtual ~BinaryExpr()
	{
		delete rightChild;
		delete leftChild;
	}
public:
	Expr* getLeftOperation() const { return leftChild; }
	Expr* getRightOperation() const { return rightChild; }

};





#endif