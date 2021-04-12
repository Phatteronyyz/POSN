#include<bits/stdc++.h>
using namespace std;
int main() {
    int q,n,i,j;
    scanf("%d",&q);
    while (q--)
    {
        scanf("%d",&n);
        for(i=0;i<2*n+1;i++){
            for(j=0;j<2*n+1;j++){
                if(i==0||j==0||i==2*n||j==2*n) printf("*");
                else if(j%2==0&&i<=j) printf("*");
                else if(i%2==0&&j<=i) printf("*");
                else printf("-");
            }
            printf("\n");
        }
    }
    
    return 0;
}