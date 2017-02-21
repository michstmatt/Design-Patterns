#ifndef DIVIDE_H
#define DIVIDE_H
#include "BinaryExpr.h"
#include "ExprVisitor.h"
class Divide : public BinaryExpr
{
public:
	Divide(Expr* r, Expr* l) :BinaryExpr(r, l) {};
	virtual double compute() const
	{
		return getLeftOperation()->compute() / getRightOperation()->compute();
	}
	virtual void accept(ExprVisitor* v)
	{
		v->visitDivide(this);
	}
};




#endif 