#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string s;
    int a[6]={0};
    cin>>n;
    /*for(i=0;i<6;i++){
        cout<<a[i]<<endl;
    }*/
    for(i=0;i<n;i++){
        cin>>s;
        if(s=="purple"){
            a[0]=1;
            //cout<<i<<endl;
        }

        else if(s=="green")
          {
            a[1]=1;
            //cout<<i<<endl;
        }
        else if(s=="blue")
            {
            a[2]=1;
            //cout<<i<<endl;
        }
        else if(s=="orange")
            {
            a[3]=1;
            //cout<<i<<endl;
        }
        else if(s=="red")
           {
            a[4]=1;
            //cout<<i<<endl;
        }
        else if(s=="yellow")
            {
            a[5]=1;
            //cout<<i<<endl;
        }
    }
    cout<<6-n<<endl;
    /*for(i=0;i<6;i++){
        cout<<a[i]<<endl;
    }*/
    if(a[0]==0)
        cout<<"Power"<<endl;
    if(a[1]==0)
        cout<<"Time"<<endl;
    if(a[2]==0)
        cout<<"Space"<<endl;
    if(a[3]==0)
        cout<<"Soul"<<endl;
    if(a[4]==0)
        cout<<"Reality"<<endl;
    if(a[5]==0)
        cout<<"Mind"<<endl;
}
