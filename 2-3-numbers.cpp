#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,w,z,x=0,y=0,count=0,a,b;
    cin>>l;
    cin>>r;
    for(int i=0; i<100; i++)
    {
        int w=pow(2,x);
        if(w>l){
            a=x;
            break;
        }
    }

    for(int i=0; i<100; i++)
    {
        int z=pow(3,y);
        if(z>r){
            b=y;
            break;
        }
    }
    cout<<a;
}
