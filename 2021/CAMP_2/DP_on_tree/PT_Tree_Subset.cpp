#include<bits/stdc++.h>
using namespace std;

#define sz(a) (int)a.size()
#define pu(b,a) a.push(b)
#define pop(a) a.pop()
#define setdcm(a) fixed << setprecision(a)
#define empty(a) a.empty()
#define mxheap priority_queue<int, vector<int> >
#define mnheap priority_queue<int, vector<int> , greater<int> >
#define nl << "\n"
#define sp << " "
#define loop0(i,a,b) for(int i=a;i<b;i++)
#define loop1(i,a,b) for(int i=a;i<=b;i++)

using ll = long long;

typedef pair<int,int> PII;

vector<ll> g[100100];
ll v[100100],dp[100100][2],mark[100100];

void dfs(ll now){
    mark[now]=1;
    dp[now][1]=v[now];
    for(auto x:g[now]){
        if(mark[x]) continue;
        dfs(x);
        dp[now][0]+=max(dp[x][0],dp[x][1]);
        dp[now][1]+=dp[x][0];
    }
}

void solve(){
    ll n,st,en,i;
    cin >> n;
    for(i=1;i<=n;i++) cin >> v[i];
    for(i=1;i<n;i++){
        cin >> st >> en;
        g[st].push_back(en),g[en].push_back(st);
    }
    dfs(1);
    cout << max(dp[1][0],dp[1][1]) nl;
    memset(v,0,sizeof v);
    memset(dp,0,sizeof dp);
    memset(mark,0,sizeof mark);
    for(i=1;i<=n;i++) g[i].clear();
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll q;
    cin >> q;
    while(q--){
        solve();
    }
    
    
    return 0;
}