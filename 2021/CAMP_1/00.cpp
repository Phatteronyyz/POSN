#include<bits/stdc++.h>
using namespace std;
char a[100][100],b[200];
int c[300][300],ch[100][100];
int n,m,ck;
void play(int x,int y,int st){
    printf("%d %d \n",x,y);
    if( a[x][y+1]==b[st+1] && ch[x][y+1]=0){
        ck++;
        c[st][0]=x;
        c[st][1]=y;
        ch[x][y]=1;
        play(x,y+1,st+1);
    }
    if(x+1<n&&a[x+1][y]==b[st+1]&&ch[x+1][y]=0){
        ck++;
        c[st][0]=x;
        c[st][1]=y;
        ch[x+1][y]=1;
        play(x+1,y,st+1);
    }
    if(x-1>=0&&a[x-1][y]==b[st+1]&&ch[x-1][y]=0){
        ck++;
        c[st][0]=x;
        c[st][1]=y;
        ch[x-1][y]=1;
        play(x-1,y,st+1);
    }
    if(y-1>=0&&a[x][y-1]==b[st+1]&&ch[x][y-1]=0){
        ck++;
        c[st][0]=x;
        c[st][1]=y;
        ch[x][y-1]=1;
        play(x,y-1,st+1);
    }

}
int main() {
    int q,i,j,len;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    scanf("%d",&q);
    while (q--)
    {
        scanf(" %s",b);
        len=strlen(b);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i][j]==b[0]){
                    play(i,j,0);
                }
            }
        }
    if(ck==len){
        for(i=0;i<len;i++){
            printf("%d %d\n",c[i][0],c[i][1]);
        }
    }
    }



    return 0;
}
/*
3 5
TAEPE
TULAR
STOPW
1
PEATT
*/
