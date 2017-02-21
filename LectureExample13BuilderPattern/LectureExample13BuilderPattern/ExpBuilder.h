#ifndef EXPBUILDER_H
#define EXPBUILDER_H
#include "Node.h"
#include "Builder.h"
#include <stack>
#include <string>

using namespace std;
class ExpBuilder :public Builder {

private:
	stack<Node*> expStack;

public:
	ExpBuilder() {}
	virtual void addOperand(string operand)
	{
		Node* n = new Node(operand);
		expStack.push(n);
	}
	virtual void addLiteral(string lit)
	{
		Node* n = new Node(lit);
		expStack.push(n);
	}
	virtual void addLeftParenthesis() {}
	virtual void addRightParenthesis() 
	{
		Node* rightChild = expStack.top();
		expStack.pop();
		Node* parent = expStack.top();
		expStack.pop();
		Node* leftChild = expStack.top();
		expStack.pop();
		parent->setLeftChild(leftChild);
		parent->setRightChild(rightChild);
		expStack.push(parent);
	}
	virtual Node* getExpression()
	{
		Node* root = expStack.top();
		expStack.pop();
		return root;
	}


};






#endif