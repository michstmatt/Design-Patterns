#include <cstdlib>
#include "CalculateLongestSubstring.h"
#include "CompareInt.h"
#include "CompareString.h"
#include <vector>
#include <iostream>
using namespace std;


int main(int argc, char ** argv)
{
	vector<char> setA = { 's','t','u','d','y','i','n','g', ',', ' ','h','a','r','d' };
	vector<char> setB = { 'p','l','a','y','i','n','g' };
	vector<int> set1 = { 15,40,20,30,25 };
	vector<int> set2 = { 40,20,30,1,6 };
	CalculateLongestSubString calclongestsub;
	CompareString* cstr = new CompareString(setA, setB);
	cout << "Length for common characters: " << calclongestsub.LCSubStr(cstr) << endl;
	CompareInt* cint = new CompareInt(set1, set2);
	cout << "Length for common integers: " << calclongestsub.LCSubStr(cint) << endl;

	return 0;
}