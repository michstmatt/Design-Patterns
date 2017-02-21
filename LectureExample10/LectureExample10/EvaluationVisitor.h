#ifndef EVALUTATIONVISITOR_H
#define EVALUATIONVISITOR_H
#include <stack>
#include "ExprVisitor.h"
#include "Literal.h"
#include "Negate.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"


class EvaluationVisitor :public ExprVisitor
{
protected:
	stack<double> _myStack;
public:
	virtual void visitLiteral(Literal* l)
	{
		_myStack.push(l->getValue());
	}
	virtual void visitNegate(Negate*n)
	{
		n->getOperand()->accept(this);
		double val = _myStack.top();
		_myStack.pop();
		_myStack.push(-val);
	}

	virtual void visitAdd(Add* a)
	{

	}
	virtual void visitSubtract(Subtract* s)
	{

	}
	virtual void visitMultiply(Multiply* m)
	{

	}
	virtual void visitDivide(Divide* d)
	{

	}
};





#endif
