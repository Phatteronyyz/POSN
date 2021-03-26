#include<bits/stdc++.h>
using namespace std;
char a[110];
int main(){
    int len,x,y;
    scanf(" %s",a);
    len=strlen(a);
    for(int i=0;i<len;i++){
        switch(a[i]){
            case 'N': y++; break;
            case 'E': x++; break;
            case 'S': y--; break;
            case 'W': x--; break;
            case 'Z': x=0,y=0;
        }
    }
    printf("%d %d",x,y);




    return 0;
}
