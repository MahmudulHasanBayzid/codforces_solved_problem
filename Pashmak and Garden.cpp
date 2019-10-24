#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,a,b,c,d,e,f;
    cin>>x1>>y1>>x2>>y2;
    if(x1!=x2 && y1!=y2)
    {
       /* if(abs(abs(x1)-abs(y1)) != abs(abs(x2)-abs(y2)))
        {
            cout<<"-1";
        }
        else
        {
            a=x1;
            b=y2;
            c=x2;
            d=y1;
            cout<<a<<" "<<b<<" "<<c<<" "<<d;
        }*/
        a=x1;
        b=y2;
        c=x2;
        d=y1;
        int g=(x1-a)*(x1-a)+(y1-b)*(y1-b);
        int h=(x1-c)*(x1-c)+(y1-d)*(y1-d);
        if(g==h)
            cout<<a<<" "<<b<<" "<<c<<" "<<d;
        else
            cout<<"-1";
    }
    else if((x1==x2)&&(y1!=y2))
    {
        e=y2-y1;
        a=x1+abs(e);
        b=y1;
        c=x2+abs(e);
        d=y2;
        cout<<a<<" "<<b<<" "<<c<<" "<<d;
    }
    else if((y1==y2)&&(x1!=x2))
    {
        f=x2-x1;
        a=x1;
        b=y1+abs(f);
        c=x2;
        d=y2+abs(f);
        cout<<a<<" "<<b<<" "<<c<<" "<<d;
    }
}
