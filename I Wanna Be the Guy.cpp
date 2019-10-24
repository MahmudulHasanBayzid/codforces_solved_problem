#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,x,y,c=-1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        a[i]=0;
    }
    cin>>x;
    int p[x];
    for(i=0;i<x;i++){
        cin>>p[i];
        a[p[i]-1]=1;
    }
    cin>>y;
    int q[y];
    for(i=0;i<y;i++){
        cin>>q[i];
        a[q[i]-1]=1;
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            c=0;
            break;
        }

    }
    if(c==0)
        cout<<"Oh, my keyboard!";

    else
        cout<<"I become the guy.";


}
