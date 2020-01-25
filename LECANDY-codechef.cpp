// https://www.codechef.com/problems/LECANDY ---> problem link


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n],sum=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    if(sum<=k)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}
