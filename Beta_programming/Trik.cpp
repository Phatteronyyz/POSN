#include<bits/stdc++.h>
using namespace std;
char a[60];
int main(){
    int len,i,j,st=1;
    scanf(" %s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='A'){
            if(st==1) st=2;
            else if(st==2)st=1;
        }
        else if(a[i]=='B'){
            if(st==2) st=3;
            else if(st==3) st=2;
        }
        else if(a[i]=='C'){
            if(st==1) st=3;
            else if(st==3) st=1;
        }
    }
    printf("%d",st);

    return 0;
}
