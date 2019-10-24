#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,l;
    cin>>l;
    for(int i=0; i<2*l-1; i++)
    {
        if(i>=l)
        {
            cout<<i-l+2<<endl;
        }
        else
            cout<<l-i<<endl;
    }
}
