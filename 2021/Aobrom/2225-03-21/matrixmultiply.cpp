#include<bits/stdc++.h>
using namespace std;
int a[30][30],b[30][30];
int main(){
    int n1,m1,n2,m2,i,j,k,sum=0;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    if(m1 != n2) {
        printf("Can\'t Multiply.\n");
        return 0;
    }
    for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n2;i++)
        for(j=0;j<m2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            for(k=0;k<m1;k++)
                sum+= a[i][k]*b[k][j];
            printf("%d ",sum);
            sum = 0;
        }
        printf("\n");
    }





    return 0;
}

