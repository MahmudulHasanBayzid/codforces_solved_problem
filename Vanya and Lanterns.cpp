#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,i;
    double d;
    cin>>n>>l;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    double c=a[0];
    //cout<<a[1];
    for(i=0;i<n-1;i++){
        d=(double)(a[i+1]-a[i])/2;
        if(d>c)
            c=d;
    }
    int s=l-a[n-1];
    if(s>c)
        c=s;
    cout.precision(10);
    cout<<fixed<<c;
}
