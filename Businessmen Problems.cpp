#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int s)
{
    int first,last,middle;
    first=0;
    last=n-1;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(a[middle]==s)
            return middle;
        else if(a[middle]>s)
        {
            last=middle-1;
        }
        else
        {
            first=middle+1;
        }
    }
    return -1;
}
int main()
{
    long long n,m,i,j,c=0,e=0,d;
    cin>>n;
    pair<int,int>a[n];
    int x[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second;
        x[i]=a[i].first;
    }
    cin>>m;
    pair<int,int>b[m];
    int y[m];
    for(i=0; i<m; i++)
    {
        cin>>b[i].first>>b[i].second;
        y[i]=b[i].first;
    }
    sort(a,a+n);
    sort(x,x+n);
    sort(b,b+m);
    sort(y,y+m);
    for(i=0; i<n; i++)
    {
        d=binarySearch(y,m,a[i].first);
        if(d==-1)
            c=c+a[i].second;
        else{
            if(a[i].second>=b[d].second){
                c+=a[i].second;
            }
        }
        //cout<<c<<" "<<a[i].first<<" "<<d<<endl;
    }
    for(i=0; i<m; i++)
    {
        d=binarySearch(x,n,b[i].first);
        if(d==-1)
            e=e+b[i].second;
        else{
            if(b[i].second>a[d].second){
                e+=b[i].second;
            }
        }
        //cout<<e<<" "<<b[i].first<<" "<<d<<endl;
    }

    cout<<c+e;
}
