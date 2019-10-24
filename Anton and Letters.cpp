#include<bits/stdc++.h>
using namespace std;
int main(){
    int i1,j1,c1[26],d1=0;
    for(i1=0;i1<26;i1++){
        c1[i1]=0;
    }
    char a1[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char b1[200];
    gets(b1);
    int b2=strlen(b1);
    //cout<<b2;
    for(i1=1;i1<b2-1;i1++){
        if(b1[i1]<123&&b1[i1]>96){
            for(j1=0;j1<26;j1++){
                if(b1[i1]==a1[j1]){
                    c1[j1]+=1;
                    //cout<<c1[j1]<<"   ";
                    break;
                }
            }
        }
    }

    for(i1=0;i1<26;i1++){
            //cout<<c1[1]<<",";
        if(c1[i1]>0)
            d1++;
    }
    cout<<d1;
}
