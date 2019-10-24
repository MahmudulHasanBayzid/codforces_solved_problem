#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a,b,c,i,j;
    cin>>n;
    a=0;
    b=n;
    for(i=0;i<n;i++){
            //cout<<i<<a<<n<<endl;
        a=a+b;
        b--;
        a=a+i*b;
    }
    cout<<a;
}
