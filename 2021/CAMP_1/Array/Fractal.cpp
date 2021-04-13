#include<bits/stdc++.h>
using namespace std;
char a[5000][5000];
int main() {
    int n,i,j,k,l,r,c,rr,cc,t;
    scanf("%d",&n);
    a[0][0]=1;
    for(i=1;i<=n;i++){
        r=(1<<i)-1;
        c=(1<<i-1);
        rr=(1<<i-1)-1;
        cc=(1<<i-2);
        for(j=0;j<c;j++){
            a[rr][j]=1;
        }
        for(int i=0;i<rr;i++){
            for(int j=0;j<cc;j++){
                a[i+rr+1][cc+j]=a[i][j];
            }
        }
    }

    for(i=0;i<(1<<n)-1;i++){
        for(j=0;j<(1<<n-1);j++){
            if(a[i][j]==1) printf("*");
            else printf("-");
        }
        printf("\n");
    }
    
    
    return 0;
}