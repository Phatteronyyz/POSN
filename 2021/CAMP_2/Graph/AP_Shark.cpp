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

vector<int > g[1010];
int w[1010],mark[1010],j;
ll sum,ma=-1e13;

void dfs(int u){
    if(mark[u]==j) return;
    mark[u]=j;
    sum+=w[u];
    for(auto x: g[u]) dfs(x);
}

void solve(){
    int n,m,i,ans=1,r,s;
    cin >> n >> m;
    for(i=1;i<=n;i++) cin >> w[i];
    for(i=0;i<m;i++){
        cin >> r >> s;
        g[r].push_back(s);
    }
    for(j=1;j<=n;j++){
        sum=0;
        dfs(j);
        if(sum>ma) ma=sum,ans=j;
    }
    cout << ans << ma nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}