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
	//vector<ASString> strs;
	//ifstream fin;
	//fin.open("infile3.txt");

	//if (fin.fail()) {
	//	cout << "Could not open the file" << endl << endl;
	//	exit(1);
	//}

	ASString str;
	ASString str2;

	cout << "Please enter a value" << endl;

	cin >> str;

	str2 = str;

	cout << str2;




	return 0;
}

