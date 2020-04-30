#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(true){
	    cin>>n;
	    int a[n];
	    if(n==0)
	        break;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int flag=0;
	    for(int i=1;i<n+1;i++){
	        if(a[a[i-1]-1] != i){
	            flag=1;
	            break;
	        }
	        
	    }
	    if(flag)
	        cout<<"not ambiguous"<<endl;
	    else
	        cout<<"ambiguous"<<endl;
	    
	}
	return 0;
}
