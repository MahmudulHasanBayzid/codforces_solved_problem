#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,d,sum=0,c;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    //cout<<sum;
    d=m-(sum+(n-1)*10);
    //cout<<d;
    if((n-1)*10+sum > m)
        cout<<"-1";
    else{
        c=(n-1)*2 + d/5;
        cout<<c;
    }
}
