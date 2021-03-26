#include<bits/stdc++.h>
using namespace std;
char a[30][30];
int b[30];
int main(){
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    for(j=0;j<m;j++){
        for(k=0;k<b[j];k++){
            for(i=0;i<n;i++){
               if(a[0][j]=='O' || a[0][j]=='#'){
                    break ;
                }

                else{
                if(a[i+1][j]=='#'||a[i+1][j]=='O'){
                    a[i][j]='#';
                    break ;
                }
                else if(i+1==n){
                    a[i][j]='#';
                    break ;
                }
            }
            }

        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }




    return 0;
}

/*
8 5
. . . . .
. . . . .
. O O . .
. . . . .
. O . . .
. . . O .
. . . . .
. . . . .
1 1 3 2 0
*/

