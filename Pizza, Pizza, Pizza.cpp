#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n;
    if(n==0)
        cout<<"0";
    else
    {
        if(n%2==0)
        {
            cout<<n+1;
        }
        else
        {
            m=(n+1)/2;
            cout<<m;
        }
    }
}
