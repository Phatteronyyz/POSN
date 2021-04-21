#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j ;
};
queue<A> bfs;
char a[1010][1010] ;
int dis[1010][1010], di[4]={1,-1,0,0}, dj[4]={0,0,1,-1} ;
int main () {
    int q,si,sj,ei,ej,ch,k,ii,jj,now;
    scanf ("%d", &q) ;
    int r,c,i,j;
    while (q--) {
        scanf ("%d %d", &r, &c) ;
        for (i=0,ch=1;i<r;i++) {
            for (j=0;j<c;j++) {
                scanf (" %c", &a[i][j]) ;
                if (a[i][j]=='A') si=i,sj=j;
                if (a[i][j]=='B') ei=i,ej=j;
            }
        }
        bfs.push({si,sj}) ;
        memset(dis,-1,sizeof dis) ;
        dis[si][sj]=0;
        while (!bfs.empty()) {
            i=bfs.front().i, j=bfs.front().j;
            now = dis[i][j] ;
            bfs.pop();
            if (i==ei&&j==ej) {
                printf ("%d\n",now) ;
                ch=0; break ;
            }
            for (k=0;k<4;k++) {
                ii=i+di[k], jj=j+dj[k] ;
                if (ii<0||jj<0||ii>=r||jj>=c) continue ;
                if (a[ii][jj]=='#') continue ;
                if (dis[ii][jj]!=-1) continue ;
                dis[ii][jj]=now+1;
                bfs.push({ii,jj}) ;
            }
        }
        if (ch) printf ("-1\n") ;
        while(!bfs.empty())
            bfs.pop() ;
    }
   return 0 ;
}