#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,c,f=0;
    cin>>n>>m>>k;
    int a[m+1];
    for(i=0; i<m+1; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<m; i++)
    {
        c=0;
        for(j=0; j<n; j++)
        {
            if(((a[i]>>j)&1)!=((a[m]>>j)&1))
                c++;
        }
        if(c<=k)
            f++;
    }
    cout<<f;
}
