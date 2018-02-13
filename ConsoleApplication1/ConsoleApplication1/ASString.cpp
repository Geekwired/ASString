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
	str = new char[cap];
	strLen = 0;
	str[strLen] = '\0';
}

ASString::ASString(const ASString & input) {
	//delete[] str;
	cap = input.cap;
	str = new char[cap];
	strLen = input.strLen;
	for (int i = 0; i <= strLen; i++) {
		str[i] = input.str[i];
	}
}

ASString::ASString(const char * input) {
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

ASString::~ASString() {
	//current--;
	delete[] str;
}

ASString& ASString::operator=(const ASString & val)
{
	if (this == &val)
		return *this;
	delete[] str;
	str = new char[val.cap];
	strLen = val.strLen;
	cap = val.cap;
	for (int i = 0; i <= val.strLen; i++)
		str[i] = val.str[i];

	return *this;
}

char ASString::operator[](int index) {
	return str[index];
}

istream & operator >>(istream & istr, ASString &myStr)
{
	char word[100] = { '\0' };
	int end = 0;

	if (istr >> word) {
		int i = 0;
		for (i = 0; word[i] != '\0'; i++) {
			if (i % 20 == 0 && i != 0)
				myStr.cap += 20;
		}
		end = i;
		//delete[] myStr.str;
		myStr.str = new char[myStr.cap];

		for (int j = 0; j <= end; j++) {
			myStr.str[j] = word[j];
		}
	}
	myStr.strLen = end;
	return istr;
}

ostream & operator << (ostream & ostr, ASString & myStr) {
	ostr << myStr.str;
	return ostr;
}

bool ASString::operator<(ASString & val) {
	if (this->strLen > val.strLen) {
		for (int i = 0; i < strLen; i++)
			if (int(str[i]) < int(val.str[i]))
				return true;
	}
	else {
		for (int i = 0; i < val.strLen; i++)
			if (int(str[i]) < int(val.str[i]))
				return true;
	}
	return false;
}

bool ASString::operator>(ASString & val) {
	if (this->strLen > val.strLen) {
		for (int i = 0; i < strLen; i++)
			if (int(str[i]) > int(val.str[i]))
				return true;
	}
	else {
		for (int i = 0; i < val.strLen; i++)
			if (int(str[i]) > int(val.str[i]))
				return true;
	}
	return false;
}

bool ASString::operator==(ASString & val) {
	if (this->strLen > val.strLen) {
		for (int i = 0; i < strLen; i++)
			if (int(str[i]) == int(val.str[i]))
				return true;
	}
	else {
		for (int i = 0; i < val.strLen; i++)
			if (int(str[i]) == int(val.str[i]))
				return true;
	}
	return false;
}

ASString &ASString::operator+(ASString & argStr)
{
	char* tempArr = new char[cap];
	str = new char[cap];
	int len = strLen + argStr.strLen;

	for (int i = 0; i < strLen; i++)
		str[i] = tempArr[i];

	for (int i = strLen; i <= len; i++)
		str[i] = argStr.str[i];

	strLen = len;
	return *this;
}

int ASString::length() {
	return strLen;
}

int ASString::capacity() {
	return cap;
}
int ASString::currentCount() {
	return 0;
}
int ASString::createdCount() {
	return 0;
}

const char * ASString::c_str() {
	return str;
}

