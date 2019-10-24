#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,j,c;
    cin>>x;
    char a[x][x];
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            c=0;
            if(a[i][j-1]=='o' && j-1>-1){
                c++;
            }
            if(a[i][j+1]=='o'&& j+1<x){
                c++;
            }
            if(a[i-1][j]=='o'&& i-1>-1){
                c++;
            }
            if(a[i+1][j]=='o'&& i+1<x){
                c++;
            }
            if(c%2!=0){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}
