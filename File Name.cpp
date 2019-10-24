#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,c=0,k=0;
    cin>>n;
    char a[n];
    int b[n];
    for(i=0; i<n; i++)
    {
        b[i]=-1;
    }
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]=='x')
        {
            c++;
            //a[i]=c;
        }
        else
        {
            if(c>2)
                j+=c-2;
            c=0;
            k++;
        }
    }
    if(k==0)
        cout<<c-2;
    else if(c!=0)
    {
        if(c>2)
            cout<<j+c-2;
        else
            cout<<j;
    }
    else
        cout<<j;
}
