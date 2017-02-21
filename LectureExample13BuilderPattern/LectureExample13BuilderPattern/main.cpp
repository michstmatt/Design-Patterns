#include <cstdlib>
#include <string>
#include <iostream>
#include "Node.h"
#include "Builder.h"
#include "ExpBuilder.h"
#include "ExpParser.h"

using namespace std;


int main(int argc, char** argv)
{
	ExpBuilder builder;
	ExpParser parser;
	parser.setBuilder(&builder);
	parser.parse("(((3+5)*7)-(6/5))");
	Node* root = builder.getExpression();
	root->print();
	cout << endl;
	cout<< "Evaluated Value: "<< root->evaluate();

	return 0;
}