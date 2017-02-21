#ifndef ADD_H
#define ADD_H
#include "BinaryExpr.h"
#include "ExprVisitor.h"



class Add : public BinaryExpr
{
public:
	Add(Expr* r, Expr* l) :BinaryExpr(r, l) {};
	virtual double compute() const
	{
		return getLeftOperation()->compute() + getRightOperation()->compute();
	}
	virtual void accept(ExprVisitor* v)
	{
		v->visitAdd(this);
	}
};





#endif