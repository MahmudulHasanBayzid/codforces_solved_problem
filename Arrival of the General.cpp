#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,x=0,y=10000,c,d,z;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>x){
            x=a[i];
            c=i;
        }
        if(a[i]<=y){
            y=a[i];
            d=i;
        }
    }
    //cout<<c<<d;
    z=c+n-1-d;
    //cout<<z;
    if(c>d) z-=1;
    cout<<z;
}
