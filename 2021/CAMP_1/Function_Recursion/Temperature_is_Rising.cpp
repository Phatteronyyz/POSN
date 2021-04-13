#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
int mx=-10;
void play(int x,int y){
    if(x+1<=n&&a[x+1][y]<100&&a[x+1][y]>a[x][y]){
        mx=max(a[x+1][y],mx);
        play(x+1,y);
    }
    if(y+1<=n&&a[x][y+1]<100&&a[x][y+1]>a[x][y]){
        mx=max(a[x][y+1],mx) ;
        play(x,y+1);
    }
    if(y-1>=0&&a[x][y-1]<100&&a[x][y-1]>a[x][y]){
        mx=max(a[x][y-1],mx);
        play(x,y-1);
    }
    if(x-1>=0&&a[x-1][y]<100&&a[x-1][y]>a[x][y]){
        mx=max(a[x-1][y],mx);
        play(x-1,y);
    }
    
    
}
int main() {
    int x,y,i,j;
    scanf("%d",&n);
    scanf("%d %d",&x,&y);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(n==1&&a[1][1]!=100) mx=a[x][y];
    else play(y,x);
    printf("%d",mx);
    
    return 0;
}

/*
4
2 1
100 1 3 8
0 2 1 4
2 3 5 100
0 8 8 100

1
1 1
9

5
4 2
0 1 100 100 0
100 2 3 1 1
100 100 4 5 100
8 7 100 6 100
7 100 100 100 9
*/