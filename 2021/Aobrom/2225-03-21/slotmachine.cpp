#include<bits/stdc++.h>
using namespace std;
int a[20],b[20],c[20],d[20],e[20],ans[810000][10];
int main(){
    int n,i,j,k,l,m,o,p,cn=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i]);
    }
    for(j=1;j<=n;j++){
        for(k=1;k<=n;k++){
            for(l=1;l<=n;l++){
                for(m=1;m<=n;m++){
                    for(o=1;o<=n;o++){
                        if(a[j]==b[k]&&a[j]==c[l]&&a[j]==d[m]&&a[j]==e[o]){
                            cn++;
                            ans[cn][1]=j;
                            ans[cn][2]=k;
                            ans[cn][3]=l;
                            ans[cn][4]=m;
                            ans[cn][5]=o;
                        }

    }

    }

    }

    }

    }
    printf("%d\n",cn);
    for(i=1;i<=cn;i++){
        for(j=1;j<=5;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }




    return 0;
}


/*
4
1 3 1 3 1
3 1 3 1 2
2 2 2 2 1
3 4 4 4 3
*/



