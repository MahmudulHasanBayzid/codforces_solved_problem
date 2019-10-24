#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j=0,x,y,c1=0,c2=0,c3=0,z;
    cin>>n>>x>>y;
    if(x<y)
        z=2*x+1;
    else
        z=2*y+1;
    //cout<<"z="<<z;

    char a[n];
    int b[n];
    for(i=0;i<n;i++)
        b[i]=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]=='.')
            c1=c1+1;
        if(a[i]=='*'){
            b[i]=c1;
            //j++;
            c1=0;
        }

        if(c1>z){
                cout<<"-1";
            break;
        }
    }
    b[i]=c1;
    for(i=0;i<n;i++){
        c2=c2+b[i];
        cout<<b[i]<<" ";
    }

}
