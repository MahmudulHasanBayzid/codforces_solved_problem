#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,c=0;
    cin>>n;
    int a[2*n];
    for(i=0;i<2*n;i++){
        cin>>a[i];
    }
    for(i=1;i<2*n;i+=2){
        for(j=0;j<2*n;j+=2){
            if(a[i]==a[j])
                c++;
        }
    }
    cout<<c;
}
