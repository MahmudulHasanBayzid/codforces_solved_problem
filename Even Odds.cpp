#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b,c,k;
    cin>>n>>k;

    if(k<=(n+1)/2)
        cout<<2*k-1;
    else{
        cout<<(k-(n-1)/2)*2-2;
    }
}
