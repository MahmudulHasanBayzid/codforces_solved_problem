#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,c;
    cin>>n>>m;
    int a[m];
    int b[n]={0};
    for(i=0;i<m;i++){
        cin>>a[i];
        b[a[i]-1]+=1;
    }
    c=1001;
    for(i=0;i<n;i++){
            //cout<<a[i]
        if(b[i]<c)
            c=b[i];
    }
    cout<<c;
}
