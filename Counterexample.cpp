#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r,a,b,c,i,j,s;
    cin>>l>>r;
    //s=sqrt(r);
    if(l%2==0 && r-l>1)
        cout<<l<<" "<<l+1<<" "<<l+2;
    else if(l%2==1 && r-l>2)
        cout<<l+1<<" "<<l+2<<" "<<l+3;
    else
        cout<<"-1";
}
