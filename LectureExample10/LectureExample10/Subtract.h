#ifndef SUBTRACT_H
#define SUBTRACT_H
#include "BinaryExpr.h"
#include "ExprVisitor.h"



class Subtract : public BinaryExpr
{
public:
	Subtract(Expr* r, Expr* l) :BinaryExpr(r, l) {};
	virtual double compute() const
	{
		return getLeftOperation()->compute() - getRightOperation()->compute();
	}
	virtual void accept(ExprVisitor* v)
	{
		v->visitSubtract(this);
	}
};





#endif