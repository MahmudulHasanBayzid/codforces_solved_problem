#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=1,n;
    char a[200];
    scanf("%s",&a);
    n=strlen(a);
    for(i=0; i<n; i++)
    {
        if((a[i]=='W')&&(a[i+1]=='U')&&(a[i+2]=='B'))
        {
            i=i+2;
            if(c!=1)
                cout<<" ";
            //i+=2;
            continue;
        }
        else
        {
            cout<<a[i];
            c=0;
        }

    }
}
