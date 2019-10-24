#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double x,y;
    cin>>x>>y;
    double p,q;
    //p=x*log(y);
    //q=y*log(x);
    //cout<<p<<" "<<q<<endl;
    if(x*log(y)== y*log(x))
        cout<<"="<<endl;
    else if(x*log(y)> y*log(x))
        cout<<"<"<<endl;
    else if(x*log(y) < y*log(x))
        cout<<">"<<endl;


}
