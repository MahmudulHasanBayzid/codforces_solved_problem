#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0,d=0,i,j,e=0;
    cin>>n>>k;
    int a[n];
    int b[100]={0};
    //b[0]=1;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                d=1;
                break;
            }
        }
        if(d==0){
            c++;
            b[e]=i+1;
            e++;
            //cout<<a[i]<<" "<<i<<endl;
        }
        d=0;
    }
    //cout<<c<<endl;
    if(c==k){
        cout<<"YES"<<endl;
        for(i=0;i<k;i++){
            cout<<b[i]<<" ";
        }
    }
    else
        cout<<"NO"<<endl;
}
