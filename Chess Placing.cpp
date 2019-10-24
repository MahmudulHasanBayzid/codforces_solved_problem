#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,a=0,b=0,k;
    cin>>n;
    int d[n/2];
    for(i=0;i<n/2;i++){
        cin>>d[i];
    }
    sort(d,d+n/2);
    i=1,j=2;
    for(k=0;k<n/2;k++){
        c=d[k];
        a+=abs(i-c);
        b+=abs(j-c);
        //cout<<a<<b<<endl;
        i+=2;
        j+=2;
    }
    //cout<<a<<b<<i<<j<<endl;
    if(a<=b)
        cout<<a;
    else
        cout<<b;
}
