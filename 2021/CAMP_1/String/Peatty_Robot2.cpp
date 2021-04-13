#include<bits/stdc++.h>
using namespace std;
char play(char st){
    
        printf("R");
        if(st=='N') st='E';
        else if(st=='E') st='S';
        else if(st=='S') st='W';
        else if(st=='W') st='N';
        return st;
   
}
char a[200];

int main() {
    int i,j,len;
    char st='N';
    scanf(" %s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='Z'){
            printf("Z");
            st='N';
        }
        //else st = play(a[i],st);
        else{
            while (st!=a[i])
            {
                st = play(st);
            }
            printf("F");
            
        }
    }
    
    return 0;
}