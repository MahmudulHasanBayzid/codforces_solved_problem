#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    pair<int,int>a[n];
    for(i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(i=1;i<n;i++){
        if(a[i-1].second>=a[i].second){
        cout<<"Happy Alex";
        return 0;
        }
    }
    cout<<"Poor Alex";
}
