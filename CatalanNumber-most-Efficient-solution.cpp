// program to generate Catalan Number in O(N) complexity
// catalan number for 'n' = 1/(n+1)* (2n C n)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findCoeff(int n, int k){
	int res=1;
	if(k>(n-k))
		k=n-k;
	for(int i=0;i<k;i++){
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}

int getCatalan(int n){
	int ans;
	int coeff = findCoeff(2*n , n);
	ans = coeff/(n+1);
	return ans;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	cout<<"Catalan number for "<<n<<" : "<<getCatalan(n)<<endl;
	return 0;
}
