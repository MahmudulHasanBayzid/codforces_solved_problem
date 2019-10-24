#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0,d;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        c+=a[i];
    }
    d=c/(n/2);
    //cout<<d;
    for(i=0; i<n; i++)
    {
        if(a[i]==0){
                i++;
            }
        for(j=0; j<n;j++)
        {
            if(a[j]==0)
                j++;
            if(((a[i]+a[j])==d)&&(i!=j)&& a[i]!=0 && a[j]!=0){
                cout<<i+1<<" "<<j+1<<endl;
                a[i]=0;
                a[j]=0;
            }
        }

    }

}
