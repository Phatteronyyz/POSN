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
#define loop0(i,a) for(i=0;i<a;i++)
#define loop1(i,a) for(i=1;i<=a;i++)

using ll = long long;

typedef pair<int,int> PII;

vector<int > g[300100];

int dp[300100];

void solve(){
    int n,i,u,v,Ma=-1;
    cin >> n;
    loop0(i,n-1){
        cin >> u >> v;
        if(u>v) swap(u,v);
        g[v].push_back(u);
    }
    loop1(i,n){
        for(auto x:g[i])
            dp[i]=max(dp[i],dp[x]);
        dp[i]++;
        Ma=max(Ma,dp[i]);
    }
    cout << Ma nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}