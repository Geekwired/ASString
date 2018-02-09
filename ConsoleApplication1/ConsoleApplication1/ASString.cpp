////
// Name:Alex Shepler
// Section: 2842
// Program Name: ASString 
//
// Description: This file is the cpp file and it contains most
// of the code that makes it work.
////

#include "stdafx.h"
#include "ASString.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
using std::vector;
using std::ostream;
using std::istream;

ASString::ASString() {
	str = new char[0];
	//cap = 10;
	//strLen = 12;
	//str = _strdup("Hello world\0");
}

ASString::~ASString() {
	delete[] str;
}

ASString::ASString(const char & input) {
	for (int i = 0; input[i] != '\0'; i++) {
		strLen = i;
		if (i % 10 == 0)
			cap += 10;
	}

	str = new char[cap];
	for (int i = 0; i <= strLen; i++) {
		str[i] = input[i];
	}
	strLen += 1;
	for (int i = strLen; i < cap; i++) {
		str[i] = '\0';
	}
}

int ASString::length() {
	return strLen;
}

int ASString::capacity() {
	return cap;
}

char ASString::at(int index) {
	return str[index];
}


istream & operator >>(istream & istr, ASString &myStr)
{
	char word[100] = { '\0' };
	int end = 0;

	if (istr >> word) {
		for (int i = 0; word[i] != '\0'; i++) {
			if (i % 20 == 0 && i != 0)
				myStr.cap += 20;
		}
		delete[] myStr.str;
		myStr.str = new char[myStr.cap];

		for (int i = 0; word[i] != '\0'; i++) {
			myStr.str[i] = word[i];
			end = i;
		}
	}
	myStr.strLen = end + 1;
	return istr;
}



ostream & operator << (ostream & ostr, ASString & myStr) {
	ostr << myStr.str;
	return ostr;
}

int operator <(ASString &lval, ASString &rval) {
	if (int(&lval) < int(&rval))
		return -1;
	else
		return 1;
}


bool ASString::operator<(ASString & val)
{
	return false;
}

bool ASString::operator>(ASString & val) {

}

bool ASString::operator=(ASString & val) {

}

const char * ASString::c_str() {
	return str;
}

void ASString::setEqualTo(const ASString &argStr) {
	strLen = sizeof(argStr);
	str = argStr.str;
}

ASString ASString::operator+(const ASString & argStr) const
{
	// TODO
	return ASString();
}
