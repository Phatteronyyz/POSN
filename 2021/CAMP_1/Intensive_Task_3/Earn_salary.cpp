#include<bits/stdc++.h>
using namespace std;
vector<int > g[100100];
int sum[100100];
void dfs(int u){
    for(auto x: g[u]){
        sum[x] += sum[u];
        dfs(x);
    }
}
int main() {
    ios::sync_with_stdio(0);
    int n,m,i,a,b;
    cin >> n >> m;
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        g[b].push_back(a);
    }
    while (m--)
    {
        cin >> a >> b;
        sum[a] += b;
    }
    dfs(1);
    for(i=1;i<=n;i++){
        printf("%d\n",sum[i]);
    }
    
    return 0;
}