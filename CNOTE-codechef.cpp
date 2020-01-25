// https://www.codechef.com/problems/CNOTE -----> problem link


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,k,n;
	cin>>t;
	while(t--){
	    cin>>x>>y>>k>>n;
	    int p[n],c[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i]>>c[i];
	    }
	    int rem=x-y;
	    int flag=0;
	    for(int i=0;i<n;i++){
	        if(p[i]>=rem && c[i]<=k){
	            cout<<"LuckyChef"<<endl;
	            flag=1;
	            break;
	        }
	            
	    }
	    if(flag==0)
	        cout<<"UnluckyChef"<<endl;
	}
	return 0;
}
