#pragma once
#include <fstream>
#include <iostream>
#include <vector>

using std::vector;
using std::istream;
using std::ostream;
class ASString {

	///
	//MYString(const MYString & mstr)																Copy Constructor; creates an empty string
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//~MYString()				DONE																Destructor: release the dynamic memory
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//= operator: lvalue&					Replaces setEqualTo(const MYString & str): void			Assignment Operator: this does the assignment operation 
	//																								aStr.setEqualTo(bStr) would change aStr so that it would
	//																								contain the same information as bStr
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Non-const [] operator:char			Like: at(index):char									Returns the character at a certain location. No Error checking.
	//																								Fast but dangerous
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//>> operator: istream&		DONE		Replaces: read(istream& istr):istr						read a string from the istream argumen (could be from cin or an 
	//																								ifstream variable({when reading in, you can assume that you will
	//																								no read in a string longer than 99 character} This function will 
	//																								now return the istream which is the normal begavior.
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//<< operator: ostream&					Replaces: write(ostream& ostr): ostr					Write the string out to the ostream argument, but do not add any end
	//																								of line(could be cout or an ofstream variable) This function will now
	//																								return the ostream which is the normal behavior.
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//< operator: int						Replaces: compareTo(const MYString& str): int			You could either replace the compareTo function with the 3 comparison
	//> operator: int						Replaces: compareTo(const MYString& str): int			operators or you could make the compareTo fumction private and then have 
	//== operator: int						Replaces: compareTo(const MYString& str): int			the operators call compareTo. If you have the operatos use compareTo, then
	//																								you should make compareTo private.
	//																								Compares the object string(Ostr) to the argument string(Astr) by subtracting
	//																								each element of Astr from Ostr until a defference is found or until all elements
	//																								have been compared
	//																								Ostr < Astr returns a negative number
	//																								Ostr > Astr returns a positive number
	//																								Ostr == Astr returns zero
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//+operator:MYString																			This function will add the rvalue onto the back of the lvalue. For example if you
	//																								had the following values inside two of your strings and added them "bat" + "man", 
	//																								then you would return a MYString that contains "batman"
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//Main:
	//Read the words from the input file into MYString variable(Note:the inputfile is the in File/Program Resources/P3 MyString v2 and is called infile3.txt). As the words are being
	//read in append them with the + operator to each other unit you have combined 5 words together into one jumbo MYString. Then take this jumbo MYString and add it into the vector
	//with pushback (so it will be using your copy constructo). Then input file probaly won't have an even multiple of 5, so you will need to allow the loop to end due to reaching end
	//due to reaching end of file(not due to knowing the word count).
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//One you have read, combined, and pushed your MYStrings into the vector, then once again sort the strings into ascending order based on their ASCII balue. Then output them to the
	//screen with one ccombination string per line. When outputting the strings also include the length and capacity of the string on the same line. Here is an example of one line 
	// of output
	//
	///										Theyseemedamazinglybusy.I		25:40
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//After outputting all the combo strings, then on a new line each output the count of the current objects, and the total coutn of the objects create throughout your program. These
	//static outputs are outputs are required. You should strive for accuracy, but are more foor out curiousity sake.
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	//You must create your own sort routine(can't call a library, bubble sort if fine) and you can't use the swap functions(I want you to using your assignment operator).

public:
	ASString();

	~ASString();

	ASString(const char & input);

	int length();

	int capacity();

	char at(int index = 0);

	//bool read(istream & istr);

	friend istream& operator >> (istream& istr, ASString &myStr);

	//void write(ostream & ostr);

	friend ostream& operator << (ostream& ostr, ASString &myStr);

	//int compareTo(const ASString &argStr);

	bool operator <(ASString &val);
	bool operator >(ASString &val);
	bool operator =(ASString &val);

	//bool operator >()
	const char * c_str();

	void setEqualTo(const ASString &argStr);

	ASString operator +(const ASString &argStr) const;

private:
	char * str;
	int strLen;
	int cap = 20;
	char alphebet[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z', '\0' };
	//char alphebet[] = "abcdefghijklmnopqrstuvwxyz";
};
