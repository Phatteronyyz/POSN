#include<bits/stdc++.h>
using namespace std;
vector<int > g[500100];
int hin[500100],dp[500100];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,k,a,b,i;
    cin >> n >> m >> k;
    while(m--){
        cin >> a >> b;
        g[a].push_back(b);
    }
    while(k--){
        cin >> a;
        hin[a]=1;
    }
    dp[0]=1;
    for(i=0;i<=n;i++){
        if(!dp[i]) continue;
        if(!hin[i]) dp[i+1]=1;
        for(auto x: g[i]) dp[x]=1;
    }
    cout << dp[n];
    if(!dp[n])
    for(i=n;i>=1;i--){
        if(dp[i]){
            cout << i << " ";
            return 0;
        }
    }
    
    return 0;
}