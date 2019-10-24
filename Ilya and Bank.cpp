#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a;
    if(a>=0)
        cout<<a;
    else{
        if(a>=-9)
            cout<<"0";
        else{
            b=(-a)%10;
            //cout<<b<<" ";
            c=(-a)/10;
            //cout<<c<<" ";
            d=c%10;
            //cout<<d<<" ";
            e=c/10;
            //cout<<e<<" ";
            if(b>=d)
                cout<<-c;
            else
                cout<<-(e*10+b);
        }
    }
}
