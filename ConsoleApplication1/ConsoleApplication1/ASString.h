#pragma once
#include <fstream>
#include <iostream>
#include <vector>

using std::vector;
using std::istream;
using std::ostream;
class ASString {


public:
	ASString();

	ASString(const ASString & input);

	ASString(const char * input);

	~ASString();

	ASString operator=(const ASString & val);

	char operator[](int index);

	friend istream& operator >> (istream& istr, ASString &myStr);

	friend ostream& operator << (ostream& ostr, ASString &myStr);

	bool operator <(ASString &val);

	bool operator >(ASString &val);

	bool operator ==(ASString &val);

	ASString operator +(ASString &argStr);

	int length();

	int capacity();

	const char * c_str();

private:
	char * str;
	int strLen;
	int cap = 20;
	char alphebet[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z', '\0' };
	//char alphebet[] = "abcdefghijklmnopqrstuvwxyz";
};
