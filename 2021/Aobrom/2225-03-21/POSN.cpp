#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,i,j,n;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=(n*4)+3;j++){
                if(j<(3*n)+3 && i==1 && j!=n+1 && j!=(n*2)+2 && j!=(n*3)+3)
                    printf("*");
                else if(j<n+1 && i==(n+1)/2)
                    printf("*");
                else if(j>(2*n)+2 && j<(3*n)+3 && i==(n+1)/2)
                    printf("*");
                else if(j==(2*n)+3 && i<(n+1)/2)
                    printf("*");
                else if(j==(3*n)+2 && i>(n+1)/2)
                    printf("*");
                else if(j==1 || j==(n*4)+3)
                    printf("*");
                else if(j==n+2 || j==(2*n)+1)
                    printf("*");
                else if(j>n+1 && j<(3*n)+3 && i==n && j!=n+1 && j!=(n*2)+2 && j!=(n*3)+3)
                    printf("*");
                else if(j==n && i<(n+1)/2)
                    printf("*");
                else if(j==(3*n)+4)
                    printf("*");
                else if(j>(3*n)+3 && j==(3*n)+3+i)
                    printf("*");
                else
                    printf("-");}

            printf("\n");
        }
    }




    return 0;
}
