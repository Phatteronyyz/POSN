#include<bits/stdc++.h>
using namespace std;
char a[5010],b[5010],d[5010];
int c[10100];
int main() {
    int ch=1,lena,lenb,i,j,k;
    scanf(" %s",d);
    if(d[0]=='0'){
        printf("0\n");
        return 0;
    }
    if(d[0]=='-'){
        ch *= -1;
        strcpy(a,&d[1]);
    }
    else strcpy(a,d);
    scanf(" %s",d);
    if(d[0]=='0'){
        printf("0\n");
        return 0;
    }
    if(d[0]=='-'){
        ch *= -1;
        strcpy(b,&d[1]);
    }
    else strcpy(b,d);
    if(ch==-1) printf("-");
    lena=strlen(a),lenb=strlen(b);
    for(i=lena-1;i>=0;i--){
        for(j=lenb-1,k=lena-1-i;j>=0;j--,k++){
            c[k]+=(a[i]-'0') * (b[j]-'0');
            if(c[k]>=10){
                c[k+1] += c[k]/10;
                c[k]%=10;
            }
        }
    }
    for(i=10001;i>=0&&c[i]==0;i--);
    for(;i>=0;i--) printf("%d",c[i]);
    
    return 0;
}