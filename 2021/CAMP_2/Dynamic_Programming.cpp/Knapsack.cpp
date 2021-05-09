#include<bits/stdc++.h>
using namespace std;

#define sz(a) (int)a.size()
#define pu(b,a) a.push(b)
#define pop(a) a.pop()
#define setdcm(a) fixed << setprecision(a)
#define empty(a) a.empty();
#define mxheap priority_queue<int, vector<int> >
#define mnheap priority_queue<int, vector<int> , greater<int> >
#define nl << "\n"
#define sp << " "

using ll = long long;

typedef pair<int,int> PII;

int dp[110][10100];
int w[110],p[110];

void solve(){
    int i,n,m,j;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> p[i] >> w[i];
    }
    for(i=1;i<=n;i++){
        for(int j=0;j<w[i];j++){
            dp[i][j]=dp[i-1][j];
        for(int j=w[i];j<=m;j++)
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+p[i]);
        }
    }
    cout << dp[n][m] nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}