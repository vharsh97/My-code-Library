#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int longCommSubSeq(int len1, int len2 , string s1 , string s2 )  
{  
    int arr[len1 + 1][len2 + 1];  
    int i, j;
    for (i = 0; i <= len1; i++)  
    {  
        for (j = 0; j <= len2; j++)  
        {  
        if (i == 0 || j == 0)  
            arr[i][j] = 0;  
        else if (s1[i - 1] == s2[j - 1])  
            arr[i][j] = arr[i - 1][j - 1] + 1;  
        else
            arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);  
        }  
    }  
    return arr[len1][len2];  
}  

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int len1 = s1.length();
    int len2 = s2.length();
    cout<<longCommSubSeq( len1, len2 , s1 , s2 )<<endl; 
    return 0;
}
