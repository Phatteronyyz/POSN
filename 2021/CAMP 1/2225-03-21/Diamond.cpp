#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++) printf("-");
        for(j=0;j<=(2*i);j++){
            if(j==0||j==(2*i)) printf("+");
            else printf("*");
        }
        for(j=0;j<n-i;j++) printf("-");
        printf("\n");
    }
    for(i=0;i<(2*n)+1;i++){
        if(i==0||i==(2*n)) printf("+");
        else printf("*");
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++) printf("-");
        for(j=0;j<(2*n)-(i*2)-1;j++){
            if(j==0||j==(2*n)-(i*2)-2) printf("+");
            else printf("*");
        }
        for(j=0;j<=i;j++) printf("-");
        printf("\n");
    }


    return 0;
}
