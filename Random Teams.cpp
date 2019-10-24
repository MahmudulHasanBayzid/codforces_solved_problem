#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,c,d,a,b,e;
    cin>>n>>m;
    if(m==1){
            i=(n*(n-1))/2;
        cout<<i<<" "<<i<<endl;
        }
    else{
        a=n/m;
        b=n%m;
        c=a+1;
        e=(m-b)*((a*(a-1))/2);
        e+=b*((c*(c-1))/2);
        //i=(m-1)*((a*(a-1))/2);
        //c=a+b;
        //i=i+(c*(c-1))/2;
        cout<<e<<" ";
        d=n-m+1;
        d=(d*(d-1))/2;
        cout<<d<<endl;
    }
}
