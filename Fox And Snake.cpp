#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,c=0,k=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        //k=i-i/2;
        for(j=0; j<m; j++)
        {
            if(i%2==0)
                cout<<"#";
            else
            {
                if(i%4==1 && j==m-1)
                    cout<<"#";
                else if(i%2==1 && j==0 && i%4!=1)
                    cout<<"#";
                else
                    cout<<".";
            }
            //cout<<c;
        }
        cout<<endl;
    }
}
