#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x=0,y;
    char c,d;
    cin>>n;
    char a[n][n];
    for(i=0; i<n; i++)
        cin>>a[i];
    c=a[0][0];
    d=a[0][1];
    if(c==d){
        cout<<"NO";
        return 0;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j ||i+j==n-1)
            {
                if(a[i][j]!=c){
                    x=1;
                    break;
                }
                //cout<<"in";
            }
            else
            {
                if(a[i][j]!=d){
                    x=1;
                    break;
                }
            }
        }
    }
    if(x==1)
        cout<<"NO";
    else
        cout<<"YES";
    //cout<<c<<d;
}
