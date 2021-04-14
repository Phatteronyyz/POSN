#include<bits/stdc++.h>
using namespace std;
char a[30],b[30];
int c[50];
int main() {
    int x,i,lena,lenb,sum=0,suma=0,sumb=0;
    scanf("%d %s %s",&x,a,b);
    lena=strlen(a), lenb=strlen(b);
    for(i=0,suma=0;i<lena;i++){
        suma *= x;
        if(isalpha(a[i])) suma += a[i]-'A'+10;
        else suma += a[i]-'0';
    }
    for(i=0,sumb=0;i<lenb;i++){
        sumb *= x;
        if(isalpha(b[i])) sumb += b[i]-'A'+10;
        else sumb += b[i]-'0';
    }
    sum=suma+sumb;
    printf("%d\n",sum);
    for(i=0;sum>0;i++){
        c[i]=sum%x;
        sum/=x;
    }
    for(i--;i>=0;i--){
        if(c[i]>=10) printf("%c",c[i]-10+'A');
        else printf("%d",c[i]);
    }
    printf("\n");
    return 0;
}