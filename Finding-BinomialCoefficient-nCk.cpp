// program to find nCk i.e binomial coefficient or combinations
// nCk = nC(n-k)
// nCk = [n*(n-1)*(n-2)*..........*(n-k+1)]/[k*(k-1)*(k-2)*........*1]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binom_coeff(int n, int k){
	int res = 1;
	if(k>(n-k))
		k=n-k;
	for(int i=0;i<k;i++){
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k;
	cin>>n>>k;
	cout<<"Binomial Coefficient of "<<n<<"C"<<k<<" : "<<binom_coeff(n,k)<<endl;
	return 0;
}
