#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,c=0,p;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            m=i+1;
            c++;
        }
        else
            p=i+1;
    }
    if(c>1)
        cout<<p;
    else
        cout<<m;
}
