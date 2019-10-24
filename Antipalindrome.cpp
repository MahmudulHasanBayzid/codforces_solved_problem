#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c=0;
    string s;
    cin>>s;
    int l=s.length();

    for(i=0,j=l-1; i<l/2; i++,j--)
    {
        if(s[i]!=s[j]){
            c=1;
            break;
        }
    }
    //cout<<c;
    if(c==1){
        cout<<l;
    }
    else{
        for(i=0;i<l;i++){
            if(s[i]!=s[l-1]){
                break;
            }
        }
        cout<<l-i;
    }
}
