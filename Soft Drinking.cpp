#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,a,b;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=(k*l)/nl;
    b=c*d;
    //cout<<a<<b;
    a=min(a,b);
    //cout<<a;
    a=min(a,p/np);
    //cout<<a;
    a=a/n;
    cout<<a;
}
