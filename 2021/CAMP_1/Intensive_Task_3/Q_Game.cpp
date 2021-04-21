#include<bits/stdc++.h>
using namespace std;
int a[510][510],cnt[2000],dis[510][510],di[2]={-1,0},dj[2]={0,1};
queue< pair<int, int> > bfs;
int main()
{
    int r,c,i,j,k,ii,jj,ans=1;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    bfs.push({r-1,0});
    memset(dis,-1,sizeof dis);
    dis[r-1][0] = 0;
    while(!bfs.empty()){
        i = bfs.front().first,j=bfs.front().second;
        bfs.pop();
        if(i==0&&j==c-1)
            break;
        for(k=0;k<2;k++){
            ii = i+di[k],jj=j+dj[k];
            if(ii<0 || jj<0 || ii>=r||jj>=c)    continue;
            if(a[ii][jj]==1)                continue;
            if(dis[ii][jj]!=-1)             continue;
            ans++;
            dis[ii][jj] = dis[i][j]+1;
            cnt[dis[ii][jj]]++;
            bfs.push({ii,jj});
        }
    }
    for(i=0;i<=r*c;i++)
    ans += cnt[i] * (cnt[i]-1);
    printf("%d\n",ans);
    return 0;
}