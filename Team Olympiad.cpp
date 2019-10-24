#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=0,c=0,m,i,j,k;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==1)
            a++;
        else if(s[i]==2)
            b++;
        else
            c++;
    }
    if(a==0 || b==0 || c==0)
        cout<<"0";
    else{
        m=min(a,b);
        m=min(m,c);
        //cout<<m;
        cout<<m<<endl;
        for(i=0;i<m;i++){
            for(j=0;j<3;j++){
                for(k=0;k<n;k++){
                        //cout<<i<<endl;
                    if(s[k]==(j+1)){
                        s[k]=0;
                        cout<<k+1<<" ";
                        break;
                    }
                }

            }
            cout<<endl;
        }
    }
}
