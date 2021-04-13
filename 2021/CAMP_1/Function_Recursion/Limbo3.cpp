#include<bits/stdc++.h>
using namespace std;
char a[11000][1000];
int h,w,k,cn,tua;
void play(int i,int j){
    //a[i][j]='.';
    if(i>=h) i=0;
    if(i<0) i=h-1;
    if(j<0) j=w-1;
    if(j>=w) j=0;
    //if(i<0||j<0||i>=h||j>=w) return ;
    if(a[i][j]=='.') return;
    a[i][j]='.',cn++;
    play(i-1,j); play(i+1,j);
    play(i,j-1); play(i,j+1);

    return ;
}
int main() {
    int i,j;
    scanf("%d %d",&w,&h);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    tua=0;
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(a[i][j]=='*'){
                tua++;
                play(i,j);
            }
        }
    }
    printf("%d",tua);

    
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