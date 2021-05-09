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

int dp[1000100],coin[20];

void solve(){
    int n,m,i,j;
    cin >> n >> m;
    for(i=0;i<n;i++) cin >> coin[i];
    for(i=1;i<=m;i++) dp[i]=1000000000;
    for(i=1;i<=m;i++){
        for(j=0;j<n;j++){
            if(i>=coin[j])
                dp[i]=min(dp[i],dp[i-coin[j]]+1);
        }
    }
    if(dp[m]==1000000000) cout << "0" nl;
    else cout << dp[m];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}