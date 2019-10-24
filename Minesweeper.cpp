#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,e=0;
    char p;
    cin>>n>>m;
    char g[102][102]={-1};
    //cout<<n<<m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>g[i][j];
        }
    }
    //cout<<g[1][1]<<endl;
    int a[8]={-1,0,1,0,-1,-1,1,1};
    int b[8]={0,1,0,-1,-1,1,1,-1};
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(g[i][j]=='.'){
                    //cout<<"in3"<<endl;
                for(int k=0;k<8;k++){
                    int c=i+a[k];
                    int d=j+b[k];
                    //cout<<g[c][d]<<i<<j<<c<<d<<a[k]<<endl;
                    if(g[c][d]=='*'){
                        cout<<"NO";
                        return 0;
                    }
                }
            }
            else if(g[i][j]=='*'){

            }

            else{
                    p=g[i][j];
                for(int k=0;k<8;k++){
                    int c=i+a[k];
                    int d=j+b[k];
                    //cout<<c<<d<<g[c][d]<<endl;
                    if(g[c][d]=='*'){
                        e++;
                        //cout<<"in"<<e<<c<<d;
                    }
                }
                if(e!=p-'0'){
                    cout<<"NO";
                    return 0;
                }
            }
            e=0;
        }
    }
    cout<<"YES";
}
