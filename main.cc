//Name:	Bryan Long
//Program: String Replace Hw1
//Description:	This is the main file
//Date: 1/28/19



#include "hw1.h"

int main(int argc, char**argv)

	{

	string kobe = argv[1]; // this declares the string 1

	string bryant = argv[2]; // this declares the string 2

	string dad1; // this declares a new string

	string dad2; // this declares a new string

	getline(cin, dad1); // this gets input

	dad2 = replace(dad1, kobe, bryant); // this calls the replace function

	cout << dad2 << endl; // this outputs the new string

}
