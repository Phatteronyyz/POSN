#include<bits/stdc++.h>
using namespace std;
char a[200];
int main() {
    int len,i,j,k,n=0,e=0,w=0,s=0;
    scanf(" %s",a);
    len=strlen(a);
    scanf("%d",&k);
    for(i=0;i<len;i++){
        if(a[i]=='N') n++;
        if(a[i]=='E') e++;
        if(a[i]=='W') w++;
        if(a[i]=='S') s++;
    }
    while(k--){
        if(n>s&&s>0) s--;
        else if(s>n&&n>0) n--;
        else if(e>w&&w>0) w--;
        else if(w>e&&e>0) e--;
        else if(s==0&&n>0) n--;
        else if(n==0&&s>0) s--;
        else if(e==0&&w>0) w--;
        else if(w==0&&e>0) e--;
    }
    printf("%d",(abs(n-s)+abs(e-w))*2);

    
    return 0;
}