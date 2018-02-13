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

	ASString &operator=(const ASString & val);

	char operator[](int index);

	friend istream& operator >> (istream& istr, ASString &myStr);

	friend ostream& operator << (ostream& ostr, ASString &myStr);

	bool operator <(ASString &val);

	bool operator >(ASString &val);

	bool operator ==(ASString &val);

	ASString operator +(ASString &argStr);

	int length();

	int capacity();

	int currentCount();

	int createdCount();

	const char * c_str();

private:
	//static int current;
	//static int created;
	char * str;
	int strLen = 0;
	int cap = 20;
};
