#include<bits/stdc++.h>
using namespace std;
char a[10000],b[10000];
int c[10000];
int main() {
    int lena,lenb,tod=0,i,j,k,ch=0;
    scanf(" %s %s",a,b);
    if(a[0]=='-'&&b[0]=='-'){
        printf("-");
        strcpy(a,&a[1]);
        strcpy(b,&b[1]);
    }
    if(a[0]!='-' && b[0]!='-'){
        lena = strlen(a), lenb= strlen(b);
        for(i=lena-1,j=lenb-1,k=0;i>=0&&j>=0;i--,j--,k++){
            c[k] = a[i]-'0' + b[j]-'0' + tod;
            tod = c[k]/10;
            c[k] %= 10;
        }
        for(;i>=0;i--,k++){
            c[k] = a[i]-'0' + tod;
            tod = c[k]/10;
            c[k] %= 10;
        }
        for(;j>=0;j--,k++){
            c[k] = b[j]-'0' + tod;
            tod = c[k]/10;
            c[k] %= 10;
        }
        if(tod)
            c[k++] = tod;
        for(i=k-1;i>=0;i--)
            printf("%d",c[i]);
        printf("\n");
    }
    else{
        if(a[0]=='-'){
            swap(a,b);
        }
        strcpy(b,&b[0]);
        lena=strlen(a),lenb=strlen(b);
        if(lena<lenb) ch=1;
        else if(lena==lenb){
            if(strcmp(a,b)<0) ch=1;
            else if(strcmp(a,b)==0){
                printf("0\n");
                return 0;
            }
        }
        if(ch){
            printf("-");
            swap(a,b);
        }
        
    }
    return 0;
}