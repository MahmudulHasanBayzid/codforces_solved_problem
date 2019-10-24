#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,i,d=0;
    cin>>a>>b>>c;
    int e[5];
    //if(a!=1 && b!=1 && c!=1)cout<<a*b*c;
    //else if(a==1 && b==1 && c==1)cout<<a+b+c;
    //else if((a==1 && b<=c)||(b==1 && a<=c)||(a==1&&b==1))cout<<(a+b)*c<<"3";
    //else if((a==1 && b>=c)||(c==1 && a<=b)||(a==1&&c==1))cout<<(a+c)*b<<"4";
    //else if((b==1 && a>=c)||(c==1 && b<=a)||(b==1&&c==1))cout<<(b+c)*a<<"5";
    e[0]=a+(b*c);
    e[1]=a*(b+c);
    e[2]=a*b*c;
    e[3]=(a+b)*c;
    e[4]=a+b+c;
    for(i=0;i<5;i++){
        if(d<e[i])
            d=e[i];
    }
    cout<<d;
}
