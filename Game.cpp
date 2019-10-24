#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int m=n%2;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    j=n/2;
    if(n==1)
        cout<<a[0];
    else if(m==0){
        cout<<a[j-1];
    }
    else{
        cout<<a[j];
    }
}
