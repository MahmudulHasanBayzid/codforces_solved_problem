#include<bits/stdc++.h>
using namespace std;
long long sumofdigit(long long num)
{
    long long sum=0;
    while ( num > 0 )
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{
    long long m,s,i,j,b,c;
    cin>>m>>s;
    long long a=pow(10,m)+.5;
    long long d=pow(10,m-1)+.5;
    //cout<<d;
    for(i=d; i<a; i++)
    {
        b=sumofdigit(i);
        //cout<<b<<endl;
        if(b==s){
            cout<<i<<" ";
            break;
        }
    }
    for(i=a-1;i>=b;i--){
        c=sumofdigit(i);
        if(c==s){
            cout<<i;
            return 0;
        }
    }
    cout<<"-1"<<" "<<"-1";
}
