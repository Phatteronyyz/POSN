#include<bits/stdc++.h>
using namespace std;
char a[120];

char rot(char a){
    printf("R");
    if(a=='N') return 'E';
    if(a=='E') return 'S';
    if(a=='S') return 'W';
    if(a=='W') return 'N';
}

int main(){
    int len,i;
    char st='N';
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='Z'){
            printf("Z");
            st='N';
        }
        else if(a[i]=='E'){
            while(st!='E')
                st=rot(st);
            printf("F");
        }
        else if(a[i]=='W'){
            while(st!='W')
                st=rot(st);
            printf("F");
        }
        else if(a[i]=='S'){
            while(st!='S')
                st=rot(st);
            printf("F");
        }
        else if(a[i]=='N'){
            while(st!='N')
                st=rot(st);
            printf("F");
        }

    }


    return 0;
}
