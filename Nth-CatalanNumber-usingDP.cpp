// program for generating N catalan number using DP
// The first few Catalan numbers for N = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int catalan(int n){
	int arr[n+1]={0};
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=0;j<i;j++){
			arr[i]+=arr[j]*arr[i-j-1];
		}
	}
	return arr[n];
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	cout<<"Catalan number for "<<n<<" : "<<catalan(n)<<endl;
	return 0;
}
