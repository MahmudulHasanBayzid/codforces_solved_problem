#include<bits/stdc++.h>
using namespace std;

int lastDigit(int a)
{
    int s=a%10;
    return s;
}
int main()
{
    int n,k,i,j,d;
    cin>>n>>k;
    for(i=0; i<k; i++)
    {
        d=lastDigit(n);
        //cout<<d<<endl;
        if(d==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }
    cout<<n<<endl;

}
