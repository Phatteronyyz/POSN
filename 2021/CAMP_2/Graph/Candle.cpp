#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
char a[2100][2100];
queue<PII > bfs;
int di[8]={1,1,1,0,0,-1,-1,-1},dj[8]={0,1,-1,1,-1,-1,0,1};

int main() {
    ios_base::sync_with_stdio(0);
    int r,c,i,j,ni,nj,k,ii,jj,cnt=0;
    cin >> r >> c;
    for(i=0;i<r;i++) cin >> a[i];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]=='1'){
                bfs.push({i,j});
                a[i][j]='0';
                while (!bfs.empty())
                {
                    ni=bfs.front().first,nj=bfs.front().second;
                    bfs.pop();
                    for(k=0;k<8;k++){
                        ii=ni+di[k],jj=nj+dj[k];
                        if(ii<0||jj<0||ii>=r||jj>=c) continue;
                        if(a[ii][jj]=='0') continue;
                        bfs.push({ii,jj});
                        a[ii][jj]='0';
                    }
                }
                cnt++;
            }
        }
    }
    cout << cnt;
    
    return 0;
}