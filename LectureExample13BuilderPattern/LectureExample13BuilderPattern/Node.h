#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>

using namespace std;

class Node {
protected:
	string m_value;
	Node* m_leftChild;
	Node* m_rightChild;

public:
	Node(string value) :m_value(value), m_leftChild(NULL), m_rightChild(NULL) {}
	virtual ~Node()
	{
		if (!m_leftChild) delete m_leftChild;
		if (!m_rightChild) delete m_rightChild;
	}
	string getValue()const { return m_value; }
	void setLeftChild(Node* left) { m_leftChild = left; }
	void setRightChild(Node* right) { m_rightChild = right; }
	
	Node* getLeftChild() const { return m_leftChild; }
	Node* getRightChild() const { return m_rightChild; }

	void print() const
	{
		if (m_leftChild)
		{
			cout << "(";
			m_leftChild->print();
		}
		cout << m_value;
		if (m_rightChild)
		{
			m_rightChild->print();
			cout << ")";
		}
	}

	double evaluate()const
	{
		if (m_leftChild && m_rightChild)
		{


			if (m_value == "+")
				return m_leftChild->evaluate() + m_rightChild->evaluate();
			else if (m_value == "-")
				return m_leftChild->evaluate() - m_rightChild->evaluate();
			else if (m_value == "*")
				return m_leftChild->evaluate() * m_rightChild->evaluate();
			else if (m_value == "/")
				return m_leftChild->evaluate() / m_rightChild->evaluate();
		}
		
			return stod(m_value);
			
	


	}

};




#endif