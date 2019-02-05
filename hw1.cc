//Name:	Bryan Long
//Program: String Replace Hw1
//Description:	This is the main file
//Date: 1/28/19



#include "hw1.h"

string replace(string bing, const string& morg,const string& rewritten)

{

	size_t mom = 0; // this sets a counter

   	while ((mom = bing.find(morg, mom)) != string::npos)
	{

         	bing.replace(mom, morg.length(), rewritten); // this calls the replace function

        	mom += rewritten.length(); // this makes the counter go up by the amount of characters in the string

    	}

    	return bing; // this returns the new file
}
