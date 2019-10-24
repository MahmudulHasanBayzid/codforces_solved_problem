#include<bits/stdc++.h>
using namespace std;
int main(){
    int m[5][5];
    int i,j,a,b,c,d,e;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>m[i][j];
            if(m[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
/*    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<m[i][j];

        }
        cout<<"\n";
    }*/

    c=abs(a-2);
    d=abs(b-2);
    e=c+d;
    //cout<<a<<b<<c<<d;
    cout<<e;
}
