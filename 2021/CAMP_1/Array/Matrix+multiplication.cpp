#include<bits/stdc++.h>
using namespace std;
int a[20][20],b[20][20],ans[20][20];
int main() {
    int n1,m1,n2,m2,i,j,sum=0,k;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            for(k=0;k<n2;k++){
                sum+=a[i][k]*b[k][j];
            }
            printf("%d ",sum);
            sum=0;
        }
        printf("\n");
    }
    
    
    return 0;
}