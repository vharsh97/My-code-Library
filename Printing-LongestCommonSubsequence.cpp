#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void longCommSubSeq(int len1, int len2 , string s1 , string s2 ) 
{ 
   int arr[len1+1][len2+1]; 
   for (int i=0; i<=len1; i++) 
   { 
     for (int j=0; j<=len2; j++) 
     { 
       if (i == 0 || j == 0) 
         arr[i][j] = 0; 
       else if (s1[i-1] == s2[j-1]) 
         arr[i][j] = arr[i-1][j-1] + 1; 
       else
         arr[i][j] = max(arr[i-1][j], arr[i][j-1]); 
     } 
   } 
   int index = arr[len1][len2]; 
   char lcs[index+1]; 
   lcs[index] = '\0'; 
   int i = len1, j = len2; 
   while (i > 0 && j > 0) 
   { 
      if (s1[i-1] == s2[j-1]) 
      { 
          lcs[index-1] = s1[i-1]; 
          i--;
          j--;
          index--;     
      } 
      else if (arr[i-1][j] > arr[i][j-1]) 
         i--; 
      else
         j--; 
   } 
   cout <<lcs<<endl; 
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int len1 = s1.length();
    int len2 = s2.length();
    longCommSubSeq( len1, len2 , s1 , s2 ); 
    return 0;
}
