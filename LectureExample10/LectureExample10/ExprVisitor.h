#ifndef VISITOR_H
#define VISITOR_H

class Literal;
class Negate;
class Add;
class Subtract;
class Multiply;
class Divide;


class ExprVisitor
{
public:
	
	virtual void visitLiteral(Literal*) = 0;
	virtual void visitNegate(Negate*) = 0;
	virtual void visitAdd(Add*) = 0;
	virtual void visitSubtract(Subtract*) = 0;
	virtual void visitMultiply(Multiply*) = 0;
	virtual void visitDivide(Divide*) = 0;

};



#endif
