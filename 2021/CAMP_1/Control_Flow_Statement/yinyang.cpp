#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,k,l,q;
    scanf("%d",&q);
    while (q--)
    {
       scanf("%d",&n);
    for(i=0;i<n+2;i++){
        for(j=0;j<n+1-i;j++) printf(".");
        for(j=0;j<i+1;j++) printf("#");
        for(j=0;j<n+2;j++){
            if(i==0||i==n+1||j==0||j==n+1) printf("+");
            else printf("#");
        }
        printf("\n");
    }
    for(i=0;i<n+2;i++){
        for(j=0;j<n+2;j++){
            if(i==0||i==n+1||j==0||j==n+1) printf("#");
            else printf("+");
        }
        for(j=0;j<n+2-i;j++) printf("+");
        for(j=0;j<i;j++) printf(".");

        printf("\n");
    }

    }
    
    
    
    return 0;
}