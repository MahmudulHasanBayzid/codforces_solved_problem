#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0,b=0,c,i,j;
    c=s.size();
    for(i=0;i<c;i++){
        if(s[i]=='o')
            a++;
        else if(s[i]=='-')
            b++;
    }
    if(a==0 || b==0 || b%a==0)
        cout<<"YES";
    else
        cout<<"NO";
}
