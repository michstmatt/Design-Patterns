#ifndef EXPPARSER_H
#define EXPPARSER_H

#include <string>
#include <iostream>
#include "Builder.h"

class ExpParser {
protected:
	Builder* m_expBuilder;

public:
	void setBuilder(Builder* builder)
	{
		m_expBuilder = builder;
	}

	void parse(string exp)
	{
		string lit;
		for (char c : exp)
		{
			switch (c)
			{
			case '(':
				if (lit.size() > 0)
				{
					m_expBuilder->addLiteral(lit);
					lit.clear();
				}
				m_expBuilder->addLeftParenthesis();
				break;
			case ')':
				if (lit.size() > 0)
				{
					m_expBuilder->addLiteral(lit);
					lit.clear();
				}
				m_expBuilder->addRightParenthesis();
				break;

			case '+':
			case '-':
			case '*':
			case '/':
				if (lit.size() > 0)
				{
					m_expBuilder->addLiteral(lit);
					lit.clear();
				}
				m_expBuilder->addOperand(string(1,c) );
				break;
				

			default:
				lit.push_back(c);
				break;
			}
		}
	}
};



#endif