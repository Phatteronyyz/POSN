#include<bits/stdc++.h>
using namespace std;
char a[11000][1000];
int h,w,k,mx=-10,cn;
void play(int x,int y){
    cn++;
    a[x][y]='.';
    if(y+1<w&&a[x][y+1]=='*'){
        play(x,y+1);
    }
    if(x+1<h&&a[x+1][y]=='*'){
        play(x+1,y);
    }
    if(x-1>=0&&a[x-1][y]=='*'){
        play(x-1,y);
    }
    if(y-1>=0&&a[x][y-1]=='*'){
        play(x,y-1);
    }
}
int main() {
    int i,j;
    scanf("%d %d",&w,&h);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(a[i][j]=='*'){
                cn=0;
                play(i,j);
                mx=max(mx,cn);
            }
        }
    }
    printf("%d",mx);

    
    return 0;
}


/*
10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***
*/