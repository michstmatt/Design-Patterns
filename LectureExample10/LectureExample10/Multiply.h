#ifndef MULTIPLY_H
#define MULITPLY_H
#include "BinaryExpr.h"
#include "ExprVisitor.h"
class Multiply: public BinaryExpr
{
public:
	Multiply(Expr* r, Expr* l) :BinaryExpr(r, l) {};
	virtual double compute() const
	{
		return getLeftOperation()->compute() * getRightOperation()->compute();
	}
	virtual void accept(ExprVisitor* v)
	{
		v->visitMultiply(this);
	}
};




#endif 