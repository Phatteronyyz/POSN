#include<bits/stdc++.h>
using namespace std;
char a[20];
int main() {
    int i,j,len,num,sum=0;
    for(i=0;i<5;i++){
        sum=0;
        scanf(" %s",a);
        len=strlen(a);
        for(j=0;j<len;j++){
            sum+=pow(a[j]-'0',j+1);
        }
        num=atoi(a);
        if(num==sum) printf("Y");
        else printf("N");
    }
    
    
    return 0;
}