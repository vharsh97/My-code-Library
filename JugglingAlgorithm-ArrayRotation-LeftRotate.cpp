#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void leftRotate(vector<int> v, int n, int d){
    int hcf = gcd(d,n);
    int temp,j,k;
    for(int i=0;i<hcf;i++){
        temp=v[i];
        j=i;
        while(1){
            k=j+d;
            if(k>=n)
                k-=n;
            if(k==i)
                break;
            v[j]=v[k];
            j=k;
        }
        v[j]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
  vector<int> v;
  int n,d,x;
  cin>>n>>d;
  for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
  }
  leftRotate(v,n,d);
}
