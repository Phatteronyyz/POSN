#include<bits/stdc++.h>
using namespace std;
int a[110][110],b[110][110],s[110][110];
int main(){
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            s[i][j]=a[i][j]+b[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }






    return 0;
}
