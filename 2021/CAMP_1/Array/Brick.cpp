#include<bits/stdc++.h>
using namespace std;
char a[40][40];
int b[40];
int main() {
    int n,m,i,j,k,cn=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         scanf(" %c",&a[i][j]);
        }
    }
    for(j=0;j<m;j++){
        a[n][j]='O';
    }
    for(j=0;j<m;j++){
         scanf("%d",&b[j]);
    }
    for(j=0;j<m;j++){
        for(i=0;i<=n;i++){
            if(a[i][j]=='O'){
                cn++;
                for(k=0;k<b[j];k++){
                    if(i-k-1>=0){
                       a[i-k-1][j]='#';  
                    }
                }
                break;
            } 
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         printf("%c",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 3 2 0
*/