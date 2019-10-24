#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,d=0,c=0;
    char k,l;
    cin>>n;
    char a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[i]==a[j] && a[i+1]==a[j+1])
            {
                c++;
                //cout<<a[i]<<a[i+1]<<i<<j<<endl;
            }
        }
        if(c>=d)
        {
            d=c;
            k=a[i];
            l=a[i+1];
        }
        c=0;
    }
    //cout<<a;
    cout<<k<<l;
}
