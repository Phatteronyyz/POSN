#include<bits/stdc++.h>
using namespace std;
vector<int > g[100100];
int color[100100];
int dfs(int u,int col){
    if(color[u]!=0&&color[u]==col) return 1;
    if(color[u]!=0&&color[u]!=col) return 0;
    color[u]=col;
    for(auto x: g[u]){
        if(dfs(x,3-col)==0) return 0;
    }
    return 1;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int q,n,m,i,u,v,ch;
    cin >> q;
    while(q--){
        cin >> n >> m;
        while(m--){
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        memset(color,0,sizeof color);
        ch=1;
        for(i=1;i<=n;i++){
            if(color[i]==0){
                if(dfs(i,1)==0){
                    ch=0;
                    break;
                }
            }
        }
        if(ch) cout << "yes" << "\n";
        else cout << "no" << "\n";
        for(i=1;i<=n;i++){
            g[i].clear();
        }
    }
    
    return 0;
}