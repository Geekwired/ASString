// ASString_V2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ASString.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

using std::vector;


int main()
{
	ASString string("cat");
	//ASString strs("dog");
	cout << string;
	//cout << (string < strs);
	return 0;
}

