#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,f=0;
    cin>>n;
    string s;
    cin>>s;
    char a[n+1];
    strcpy(a, s.c_str());
    for (int i=0; i<n; i++){
        if(a[i]==48)
            c++;
    }
    //cout<<a[0]<<endl;
    if(n==1)
        cout<<a[0];
    else{
        cout<<"1";
        for(i=0;i<c;i++)
            cout<<"0";
    }

}
