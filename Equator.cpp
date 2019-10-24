#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0,p=0;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
        m=m+a[i];
    }
    //cout<<m;
    float s=(float)m/2;
    //cout<<s;
    for(i=0;i<n;i++){
        p=p+a[i];
        if(p>=s)
        {
            i=i+1;
            cout<<i;
            break;
        }
    }

}
