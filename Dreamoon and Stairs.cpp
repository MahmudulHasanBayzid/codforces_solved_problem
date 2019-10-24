#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,i;
    cin>>n>>m;
    a=(n+1)/2;
    if(m>n)
        cout<<"-1";
    else{
        for(i=1;i<n;i++){
            b=m*i;
            if(b>=a){
                cout<<b;
                break;
            }
        }
    }
}
