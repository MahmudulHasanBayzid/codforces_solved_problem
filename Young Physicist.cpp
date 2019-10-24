#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,x=0,y=0,z=0;
    cin>>n;
    int m[n][3];
    for(i=0;i<n;i++){
        cin>>m[i][0];
        x=x+m[i][0];
        cin>>m[i][1];
        y=y+m[i][1];
        cin>>m[i][2];
        z=z+m[i][2];
    }
    //cout<<s;
    if(x==0&&y==0&&z==0)
        cout<<"YES";
    else
        cout<<"NO";
}
