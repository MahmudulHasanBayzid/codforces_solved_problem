#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,a,b,x,y,z1,z2;
    float f;
    cin>>n>>m>>a>>b;
    f=(float)b/m;
    //cout<<f;
    if(f>=a)
        cout<<n*a;
    else{
        x=n/m;
        y=n%m;
        z1=x*b+y*a;
        z2=x*b+b;
        if(z1<z2)
            cout<<z1;
        else
            cout<<z2;
    }
}
