#include<bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main()
{
    int s,n,i,j,c=0;
    cin>>s>>n;
    int a[n];
    int b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(&a[j], &a[j+1]);
                swap(&b[j], &b[j+1]);
            }
        }
    }
    /* for(i=0;i<n;i++){
         cout<<a[i]<<" "<<b[i]<<endl;
     }*/

    for(i=0; i<n; i++)
    {
        if(s<=a[i])
            break;
        else
        {
            s+=b[i];
            c++;
        }
    }
    //cout<<c;
    if(c==n)
        cout<<"YES";
    else
        cout<<"NO";

}
