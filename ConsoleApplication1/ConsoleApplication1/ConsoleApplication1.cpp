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
	vector<ASString> strs;
	ASString str;
	ifstream fin;
	fin.open("infile3.txt");

	if (fin.fail()) {
		cout << "Could not open the file" << endl << endl;
		exit(1);
	}
	int tempi = 0;
	for (int i = 0; fin.eof() != true; i++) {
		ASString temp;
		fin >> temp;

		str = str + temp;
		cout << str;
		if (tempi == 5) {
			strs[tempi] = str;
			tempi = 0;
		}
		tempi++;
	}
#pragma region p2


	//ifstream fin;
	//fin.open("infile2.txt");
	//if (fin.fail()) {
	//	cout << "Cannot open file";
	//	system("pause");
	//	exit(1);
	//}
	//ASString str("Hello");
	//vector<ASString> strs{ 100 };
	//int words;
	//cout << str.read(fin) << endl << endl;
	//int endOfVect;
	//for (int i = 0; fin.eof() != true; i++) {
	//	str.read(fin);
	//	strs[i] = str.c_str();
	//	ASString def;
	//	endOfVect = i;
	//}

	//strs.resize(endOfVect);

	//bool swapped = true;
	//int temp;

	//do {
	//	swapped = false;
	//	for (int i = 0; i < strs.size() - 1; i++) {
	//		if (strs[i].compareTo(strs[i + 1]) > strs[i + 1].compareTo(strs[i])) {
	//			swap(strs[i], strs[i + 1]);
	//			/*vector<ASString> temp;
	//			temp[0] = strs[i];
	//			strs[i] = strs[i + 1];
	//			strs[i + 1] = temp[0];*/
	//			swapped = true;
	//		}
	//	}
	//} while (swapped == true);
	//fin.close();
	//ofstream fout("output.txt");
	//for (int i = 0; i < strs.size(); i++) {
	//	fout << setw(13);
	//	if (i % 6 == 0 && i != 0)
	//		fout << endl;
	//	strs[i].write(fout);
	//}
	//cout << str.c_str();
	//fout.close();



	//cin >> str;
	//cout << str.capacity();
	//cout << str.length() << endl;
#pragma endregion

	return 0;
}

