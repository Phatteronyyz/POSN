#include<bits/stdc++.h>
using namespace std;
char  a[10];
int main(){
    int i,j,sum,num,len;
    for(i=0;i<5;i++){
        scanf(" %s",a);
        len=strlen(a);
        for(j=0,sum=0;j<len;j++)
            sum+= pow(a[j]-'0',j+1);
        num=atoi(a);
        if(sum==num) printf("Y");
        else         printf("N");
    }




    return 0;
}
