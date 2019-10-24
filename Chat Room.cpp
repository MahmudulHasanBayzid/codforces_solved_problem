#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100];
    char c[]="hello";
    scanf("%s",&a);
    //printf("%s",a);
    int b=0;
    int i = strlen(a);


        int j;
        for(j=0;j<i;j++){
            if(a[j]==c[b])
                b++;
        }
        //cout<<b;

    if(b==5)
        cout<<"YES";
    else
        cout<<"NO";
}
