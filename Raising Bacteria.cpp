#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i=0,c=0;
    cin>>n;
    while(n>0){
            i=0;
        while(pow(2,i)<=n){
            i++;
            //cout<<i<<" "<<pow(2,i)<<endl;
        }
        c++;
        n-=pow(2,i-1);
    }
    cout<<c;
}
