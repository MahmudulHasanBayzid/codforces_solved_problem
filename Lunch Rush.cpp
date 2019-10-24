#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,f,t,i,c=-1000000000;
    cin>>n>>k;
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(b[i]>k)
            c=max(c,a[i]-(b[i]-k));
        else
            c=max(c,a[i]);
    }
    //for(i=0;i<n;i++)
    cout<<c;
}
