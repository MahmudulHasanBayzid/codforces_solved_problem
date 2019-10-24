#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,n,m;
    cin>>m;
    cin>>n;
    while(n*m>0){
        n-=1;
        m-=1;
        if(a==0)
            a=1;
        else
            a=0;
    }
    if(a==1)
        cout<<"Akshat";
    else
        cout<<"Malvika";
}
