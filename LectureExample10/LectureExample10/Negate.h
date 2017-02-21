#ifndef NEGATE_H
#define NEGATE_H

#include "Expr.h"
#include "ExprVisitor.h"


class Negate :public Expr
{
private:
	Expr* _opPtr;
public:
	Negate(Expr* ptr) :_opPtr(ptr) {};
	virtual ~Negate() { delete _opPtr; };

	Expr* getOperand() const { return _opPtr; };

	virtual double compute()const { return -(_opPtr->compute()); };
	virtual void accept(ExprVisitor* v) { v->visitNegate(this); };


};



#endif
