#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=n-1; i>=0; i--)
    {
        if(a[i]==-100)
        {
            c++;
            continue;
        }
        for(j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                a[j]=-100;
                //cout<<j<<endl;
            }
        }
    }
    int m=n-c;
    cout<<m<<endl;
    for(i=0;i<n;i++){
        if(a[i]!=-100)
            cout<<a[i]<<" ";
    }
}
