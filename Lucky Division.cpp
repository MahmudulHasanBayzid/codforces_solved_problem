#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,c=0;
    cin>>a;
    int b[]={4,7,47,44,77,74,444,447,474,477,744,747,774,777};
    for(i=0;i<12;i++){
        if(a%b[i]==0){
            c=1;
            break;
        }
    }
    if(c==1)cout<<"YES";
    else cout<<"NO";
    //cout<<c;

 /*   if((a%4==0) || (a%7==0))
        cout<<"YES";
    else{
        while(a>0){
            int i=a%10;
            if((i!=4)&&(i!=7)){
                cout<<"NO";

            }
            a/=10;
        }
        cout<<"YES";
    }*/
}
