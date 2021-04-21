#include<bits/stdc++.h>
using namespace std;
vector<int> g[1010];
int mark[1100];
void dfs(int u){
    if(mark[u]) return ;
    mark[u]=1;
    for(auto x: g[u])
        dfs(x);
}
int main() {
    ios::sync_with_stdio(0);
    int n,m,q,s,e;
    cin >> n >> m >> q;
    while (m--)
    {
        cin >> s >> e;
        g[s].push_back(e);
    }
    while(q--){
        cin >> s >> e;
        dfs(s);
        printf(mark[e]?"Yes\n":"No\n");

        memset( mark , 0 , sizeof mark);
    }

    return 0;
}