#include<bits/stdc++.h>
using namespace std;
int p[200][200],w[200][200];
char a[30];
int main() {
    int i,j,k,len,ck=0,ci=0;
    p[2][0]=1,p[1][1]=1,p[3][1]=1,p[0][2]=1,p[4][2]=1,p[1][3]=1,p[3][3]=1,p[2][4]=1;
    w[2][0]=2,w[1][1]=2,w[3][1]=2,w[0][2]=2,w[4][2]=2,w[1][3]=2,w[3][3]=2,w[2][4]=2;
    scanf(" %s",a);
    len=strlen(a);
    printf("%d\n",len);
    printf("\n");
    for(i=0;i<5;i++){
        for(j=0;j<len*5;j++){
            if(ci%3==0) printf("%d",p[i][j%5]);
            else printf("%d",w[i][j%5]);
            ck++;
        }

        if(ck==5){
            ci++;
            ck=0;
        }
        printf("\n");
    }

    
   
    return 0;
}