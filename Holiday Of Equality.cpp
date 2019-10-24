#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,temp,total=0;
    cin>>n;
    int m[n];
    int l[n];
    for(i=0;i<n;i++){
        cin>>m[i];
    }
    temp=0;
    if(n==1)
        cout<<"0";
    else
    {
        for(i=0;i<n;i++){
            if(m[i]>temp)
                temp=m[i];
        }
        //cout<<temp;
        for(i=0;i<n;i++){
            total=total+abs(temp-m[i]);
        }
        cout<<total;
    }

}
