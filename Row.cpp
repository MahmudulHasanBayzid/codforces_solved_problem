#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,i,d=0;
    cin>>n;
    c=(n+1)/2;
    string a;
    cin>>a;
    /*for(i=0;i<n;i++){
        if(a[i]==49)
            d++;
    }
    //cout<<d<<endl;*/
    if(n==1)
    {
        if(a[0]==49)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
    {
        if((a[0]==a[1] && a[0]==48)||(a[n-1]==a[n-2] && a[n-1]==48)){
            cout<<"NO";
            return 0;
        }
        for(i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1] && a[i]==49)
            {
                cout<<"NO";
                return 0;
            }
            if(i+2<n && a[i]==48 && a[i+1]==48 && a[i+2]==48)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }

}
