#include<bits/stdc++.h>
using namespace std;
char a[100][100],b[200];
int c[300][300],ch[100][100],len;
int n,m,ck;
void play(int x,int y,int st){
    //printf("%d %d %d\n",x,y,st);
    if(st==len-1){
        ck = 1;
        c[st][0] = x; c[st][1] = y;
        for(int i=0;i<len;i++){
            printf("%d %d\n",c[i][0]+1,c[i][1]+1);
        }
    }
    if(m>y+1&&a[x][y+1]==b[st+1]&&ch[x][y+1]==0){
        c[st][0]=x;
        c[st][1]=y;
        ch[x][y+1]=1;
        play(x,y+1,st+1);
        ch[x][y+1]=0;
    }
    if(x+1<n&&a[x+1][y]==b[st+1]&&ch[x+1][y]==0){
        c[st][0]=x;
        c[st][1]=y;
        ch[x+1][y]=1;
        play(x+1,y,st+1);
        ch[x+1][y]=0;
    }
    if(x-1>=0&&a[x-1][y]==b[st+1]&&ch[x-1][y]==0){
        c[st][0]=x;
        c[st][1]=y;
        ch[x-1][y]=1;
        play(x-1,y,st+1);
        ch[x-1][y]=0;
    }
    if(y-1>=0&&a[x][y-1]==b[st+1]&&ch[x][y-1]==0){
        c[st][0]=x;
        c[st][1]=y;
        ch[x][y-1]=1;
        play(x,y-1,st+1);
        ch[x][y-1]=0;
    }

}
int main() {
    int q,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
            a[i][j]=tolower(a[i][j]);
        }
    }
    

    scanf("%d",&q);
    while (q--)
    {
        ck = 0;
        scanf(" %s",b);
        len=strlen(b);
        for(i=0;i<len;i++) b[i]=tolower(b[i]);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i][j]==b[0]){
                    ch[i][j]=1;
                    play(i,j,0);
                    ch[i][j]=0;
                }
            }
        }
        if(!ck) printf("No Matching Word\n");    
        memset(ch,0,sizeof ch);
    }
    
    
    
    return 0;
}
/*
3 5
TAEPE
TULAR
STOPW
3
HELLOWORLD
PEATT
PEATTS

*/