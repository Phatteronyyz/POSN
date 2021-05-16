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

int n,a[5100],dp[5100][110];

int play(int u,int k){
    if(u>n||k==0) return 0;
    if(dp[u][k]!=-1) return dp[u][k];
    int i,ans=0;
    for(i=0;k-i-1>=0;i++){
        ans=max(ans,a[u]+play(2*u,i)+play(2*u+1,k-i-1));
    }
    return dp[u][k]=ans;
}

void solve(){
    int i,k,ans=0;
    cin >> n >> k;
    for(i=1;i<=n;i++) cin >> a[i];
    memset(dp,-1,sizeof dp);
    for(i=1;i<=n;i++)
        ans=max(ans,play(i,k));
    cout << ans nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}