#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,c=0,d=0;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    for(i=0;i<m;i++){
        for(j=d;j<n;j++){
                if(a[i]==0)
                    break;
            if(a[j]<=b[i]){
                c++;
                d++;
                break;
            }
            else{
                d++;
            }
        }
    }
    cout<<c;
}
