#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,c;
    cin>>n>>m;
    long long a[m];
    for(i=0;i<m;i++){
        cin>>a[i];
        if(i==0)
            c=a[i]-1;
        else{
            if(a[i]>=a[i-1])
                c+=a[i]-a[i-1];
            else{
                c+=n-abs(a[i]-a[i-1]);
            }
        }
    }
    cout<<c;
}
