#include<bits/stdc++.h>
using namespace std;
char a[120];
int main() {
    int i,len,pi=0,pj=0;
    scanf(" %s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='Z') pi=0,pj=0;
        if(a[i]=='N') pi++;
        if(a[i]=='E') pj++;
        if(a[i]=='W') pj--;
        if(a[i]=='S') pi--; 
    }
    printf("%d %d",pj,pi);
    
    return 0;
}