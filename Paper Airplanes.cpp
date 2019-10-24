#include<bits/stdc++.h>
using namespace std;
int main()
{
    double k,n,s,p,x,c,i,y;
    cin>>k>>n>>s>>p;
    x=ceil(n/s);
    y=k*x;
    int r=ceil(y/p);
    cout<<r;

}
