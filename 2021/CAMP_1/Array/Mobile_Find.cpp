#include<bits/stdc++.h>
using namespace std;
int a[40][40];
int main() {
    int q,h,w,i,j,k,mx=-2e9,ai,aj;
    scanf("%d",&q);
    while(q--){
        mx=-2e9;
        scanf("%d %d",&h,&w);
        for(i=1;i<=h;i++){
            for(j=1;j<=w;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=1;i<=h;i++){
            for(j=1;j<=w;j++){
                if(abs(a[i][j]-a[i][j+1])<=10&&a[i][j]+a[i][j+1]>mx&&j+1<=w){
                    mx=a[i][j]+a[i][j+1];
                    ai=i;
                    aj=j;
                }
                if(abs(a[i][j]-a[i+1][j])<=10&&a[i][j]+a[i+1][j]>mx&&i+1<=h){
                    mx=a[i+1][j]+a[i][j];
                    ai=i;
                    aj=j;
                }
            }
        }
        printf("%d %d",ai,aj);
    }
    
    return 0;
}

/*
2
4 5
5 1 2 10 4
4 30 3 0 100
3 25 10 4 10
3 20 4 8 5
*/
