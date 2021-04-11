#include<bits/stdc++.h>
using namespace std;
char a[500],b[500],o[5];
int main()
{
    int lena,lenb,lens,mx,mn;
    gets(a);
    gets(o);
    gets(b);
    lena=strlen(a);
    lenb=strlen(b);
    lens=lena+lenb;
    mx=max(lena,lenb);
    mn=min(lena,lenb);
    if(o[0]=='*'){
        for(int i=0;i<lens-1;i++){
            if(i==0) printf("1");
            else printf("0");
        }
    }
    else if(o[0]=='+'){
        for(int i=0;i<mx;i++){
            if(i==0&&lena==lenb) printf("2");
            else if(i==0||i==(mx-mn)) printf("1");
            else printf("0");
        }
    }

    return 0;
}

