#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<i+1;j++) printf("*");
        for(j=0;j<(2*n)-(i*2)-3;j++) printf("-");
        for(j=0;j<i+1;j++) printf("*");
        printf("\n");
    }
    for(i=0;i<(2*n)-1;i++) printf("*");
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++) printf("*");
        for(j=0;j<(2*i)+1;j++) printf("-");
        for(j=0;j<n-1-i;j++) printf("*");
        printf("\n");
    }



    return 0;
}
