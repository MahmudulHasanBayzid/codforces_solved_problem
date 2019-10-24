#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,l,c=1;
    cin>>n>>k;
    char a[n][k];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]=='.')
            {
                for(l=j; l<j+k; l++)
                {
                    if(a[i][l]=='.'){
                        c++;
                    }
                    else
                        break;
                }
            }
        }
    }
}
