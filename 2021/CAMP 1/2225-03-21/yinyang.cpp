#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,j;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n+1;i++){
            for(j=n+1;j>=i;j--)
                printf(".");
            for(j=1;j<=i;j++)
                printf("#");
            for(j=1;j<=n+2;j++){
            if(i==1||j==n+2||j==1)
                printf("+");
            else
                printf("#");
            }
        printf("\n");
        }
    for(i=1;i<=2;i++){
        for(j=1;j<=n+2;j++)
            printf("#");
        for(j=1;j<=n+2;j++)
            printf("+");
    printf("\n");
    }
    for(i=1;i<=n+1;i++){
            for(j=1;j<=n+2;j++){
            if(i==n+1||j==n+2||j==1)
                printf("#");
            else
                printf("+");
            }
            for(j=n+1;j>=i;j--)
                printf("+");
            for(j=1;j<=i;j++)
                printf(".");


        printf("\n");

        }
        }





    return 0;
}
