#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z,a,b,c;
    int d,s,e;
    cin>>x>>y>>z>>a>>b>>c;
    d=abs(y-x);
    s=d*a;
    e=abs(x-z)*b+3*c+d*b;
    if(s<e)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
