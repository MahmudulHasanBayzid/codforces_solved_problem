#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=1000000000; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[j]==i)
            {
                if(a[j]%2==0)
                {
                    a[j]=a[j]-1;
                }
                else
                    a[j]=a[j]+1;
            }
        }
    }
    for(i=0; i<n; i++)
        cout<<a[i];
}
