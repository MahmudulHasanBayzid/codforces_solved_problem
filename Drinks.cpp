#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,i,c=0,d;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>d;
        c+=d;
    }
    c=c/n;
    cout.precision(12);
    cout<<fixed<<c;
}
