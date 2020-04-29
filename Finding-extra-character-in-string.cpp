	// C++ program to find extra 
// character in one string 
#include<bits/stdc++.h> 
using namespace std; 

char findExtraCharacter(string s1, string s2) 
{	 
	string smallStr; 
	string largeStr; 

	// Determine string with extra character. 
	if(s1.size() > s2.size()) 
	{ 
		smallStr = s2; 
		largeStr = s1; 
	} 
	else
	{ 
		smallStr = s1; 
		largeStr = s2; 
	} 

	int smallStrCodeTotal = 0; 
	int largeStrCodeTotal = 0; 
	int i = 0; 

	// Add character codes of both the strings 
	for(; i < smallStr.size(); i++) 
	{ 
		smallStrCodeTotal += smallStr[i]; 
		largeStrCodeTotal += largeStr[i]; 
	} 

	// Add last character code of large string. 
	largeStrCodeTotal += largeStr[i]; 

	// Minus the character code of smaller string from 
	// the character code of large string. 
	// The result will be the extra character code. 
	int intChar = largeStrCodeTotal - smallStrCodeTotal;	 
	return (char)intChar; 
} 

// Driver code 
int main() 
{ 
	string s1 = "abcd"; 
	string s2 = "cbdae"; 
	
	char extraChar = findExtraCharacter(s1, s2); 
	cout<<"Extra character: " <<(extraChar)<<endl; 
	return 0; 
} 
