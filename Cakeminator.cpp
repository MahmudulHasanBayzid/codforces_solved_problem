#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,d=0,e=0;
    char x;
    cin>>r>>c;
    int a[r];
    int b[c];
        for(i=0;i<r;i++)
            a[i]=0;
    for(i=0;i<c;i++)
            b[i]=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>x;
            if(x=='S')
            {
                a[i]=1;
                b[j]=1;
                //cout<<"m";
            }
        }
    }
    for(i=0;i<r;i++){
            if(a[i]==0)
            d++;
        //cout<<a[i]<<" ";
        }

    for(i=0;i<c;i++){
            if(b[i]==0)
            e++;
        //cout<<b[i]<<" ";
        }
        //cout<<d<<e<<" ";
    cout<<d*c+e*r-e*d;
}
