#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,j=0;
    cin>>n;
    int a[n];
    int q=0,w=0,e=0,r=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==4)
            q+=1;
        else if(a[i]==3)
            w+=1;
        else if(a[i]==2)
            e+=1;
        else
            r+=1;
    }
    //cout<<q<<w<<e<<r;
    c=c+q;
    if(w<=r)
    {
        c=c+w;
        r=r-w;
        //cout<<"aa"<<r<<c;
    }
    else
    {
        c=c+w;
        r=0;
    }
    if(e!=0)
    {
        if(e%2==1)
        {
            c=c+1+e/2;
            if(r<=2)
                r=0;
            else
                r=r-2;
            //cout<<"aa";
        }
        else
        {
            c+=e/2;

        }
    }
    if(r%4==0)
        c=c+r/4;
    else
        c=c+(r/4)+1;

    cout<<c;
}
