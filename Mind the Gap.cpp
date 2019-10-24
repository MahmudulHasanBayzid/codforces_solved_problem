#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,h,m,i,x,y,z,c=0;
    cin>>n>>s;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>h>>m;
        a[i]=h*60+m;
    }
    //cout<<a[0];
    for(i=0; i<n; i++)
    {
        //cout<<a[i+1]-a[i]<<" ";
        if(a[0]>=s+1)
        {
            cout<<"0"<<" "<<"0";
            return 0;
        }
        if(a[i]-c>=(s+1)*2)
        {
            x=c+s+1;
            y=x/60;
            z=x%60;
            cout<<y<<" "<<z;
            return 0;
        }
        c=a[i];
    }
    x=a[n-1]+s+1;
    y=x/60;
    z=x%60;
    cout<<y<<" "<<z;
}
