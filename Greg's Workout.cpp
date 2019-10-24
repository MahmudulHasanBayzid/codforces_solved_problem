#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,x=0,y=0,z=0,q;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if((i+1)%3 == 1)
            x+=a[i];
        else if((i+1)%3 == 2)
            y+=a[i];
        else
            z+=a[i];
    }
    q=max(x,max(y,z));
    if(q==x)
        cout<<"chest";
    else if(q==y)
        cout<<"biceps";
    else
        cout<<"back";
}
