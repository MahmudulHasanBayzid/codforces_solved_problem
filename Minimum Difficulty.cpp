#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m,j,l=1000000000;
    cin>>n;
    int a[n];
    int b[n-1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   /* for(i=1;i<n;i++){
        m=
    }*/
    for(i=1;i<n-1;i++){
            m=0;
        for(j=0;j<n-1;j++){
            if(j+1==i){
                m=max(m,a[j+2]-a[j]);
                //cout<<m;
            }
            else if(j==i)
                continue;
            else{
                m=max(m,a[j+1]-a[j]);
                //cout<<m;
            }
            //cout<<m<<" ";
            //l=min(l,m);
        }
        l=min(l,m);
        //cout<<l<<endl;
    }
    cout<<l;
}
