#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c,m,a,j=0;
    cin>>n;
    int k[4];
    for(i=n+1;i<=9999;i++){
            c=i;
        while(c>0){
            k[j]=c%10;
            c=c/10;
            j++;
        }
        j=0;
        if(k[0]!=k[1] && k[0]!=k[2] && k[0]!=k[3] && k[1]!=k[2] && k[1]!=k[3] && k[2]!=k[3]){
            cout<<i;
            return 0;
        }
    }
}
