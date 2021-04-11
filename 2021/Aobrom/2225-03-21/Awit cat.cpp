#include<bits/stdc++.h>
using namespace std;
char a[510];
int main(){
    int q,i,c,cn=0,len;
    gets(a);
    sscanf(a,"%d",&q);
    while(q--){
        cn=0;
        gets(a);
        len=strlen(a);
        for(i=0,c=0;i<len;i++){
            if(a[i]=='m'){
                c=i;
                if(a[i]=='m'&&a[i+1]=='e'&&a[i+2]=='o'&&a[i+3]=='w'){
                    c+=4;
                }
                if(a[c]!=' '||a[c]!='\0') cn--;
            }
        }
        if(cn>=1) printf("Yes\n");
        else printf("NO\n");

    }





    return 0;
}

/*
3
iku iku iku iku meowmeow
meowwwwwwww itte itte itte
mameow meow shinu shinusshinu
*/
