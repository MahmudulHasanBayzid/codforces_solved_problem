#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,i,j,k,m,c=0;
    cin>>n>>v;
    int a[n+1];
    for(i=0;i<n;i++){
        cin>>k;
        for(j=0;j<k;j++){
            cin>>m;
            if(m<v){
                //cout<<i+1<<" ";
                a[c]=i+1;
                c++;
                break;
            }
        }
    }
    if(c==0)
        cout<<"0";
    else{
        cout<<c<<endl;
        for(i=0;i<c;i++)
            cout<<a[i]<<" ";
    }
}
/*
{
    int m,n,i;
    int ans=0,a;
    int flag;
    int an[100010];
    int c=0;
    int cnt;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&cnt);
        flag=0;
        while(cnt--)
        {
            scanf("%d",&a);
            if(a<n)
                flag=1;
        }
        if(flag)
        {
            an[c++]=i;
        }
    }
    printf("%d\n",c);
    for(i=0;i<c;i++)
        printf("%d ",an[i]);
    if(c!=0)
    printf("\n");
    return 0;
}
*/
