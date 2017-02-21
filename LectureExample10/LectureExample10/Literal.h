#ifndef LITERAL_H
#define LITERAL_H
#include "Expr.h"
#include "ExprVisitor.h"



class Literal :public Expr
{
private:
	double _value;
public:
	Literal(double value) :_value(value) {};
	double getValue() const { return _value; };

	virtual double compute() { return getValue(); };

	virtual void accept(ExprVisitor* v) { v->visitLiteral(this); };
};




#endif 