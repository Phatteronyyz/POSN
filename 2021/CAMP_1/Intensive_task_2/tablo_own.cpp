#include<bits/stdc++.h>
using namespace std;
int a[600][600];
int main() {
    ios::sync_with_stdio(0);
    int n,m,i,j,mn=2e9;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=m;j++){
            if(j==1) a[i][j]+=min(a[i+1][j],a[i+1][j+1]);
            else if(j==m) a[i][j]+=min(a[i+1][j],a[i+1][j-1]);
            else a[i][j]+=min(a[i+1][j],min(a[i+1][j+1],a[i+1][j-1]));
        }
    }
    for(j=1,i=1;j<=m;j++){
        mn=min(a[i][j],mn);
    }
    printf("\n%d",mn);
    
    return 0;
}

/*
5 6
3 6 1 7 2 3
4 7 9 5 2 1
3 3 3 9 9 8
7 5 7 5 8 9
2 4 1 3 7 1
*/