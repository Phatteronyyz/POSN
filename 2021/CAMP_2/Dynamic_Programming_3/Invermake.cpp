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
#define mod 1000000007

using ll = long long;

typedef pair<int,int> PII;

int dp[1010][10100];

void solve(){
    int n,d,i,j;
    cin >> n >> d;
    dp[1][0]=1;
    for(j=1;j<=d;j++) dp[1][j]=1;
    for(i=2;i<=n;i++){
        dp[i][0]=dp[i-1][0];
        for(j=1;j<=d;j++){
            dp[i][j]=dp[i][j-1]+dp[i-1][j];
            if(j-i>=0) dp[i][j]-=dp[i-1][j-1];
            dp[i][j]%=mod; dp[i][j]+=mod; dp[i][j]%=mod;
        }
    }
    cout << ((dp[n][d]-dp[n][d-1]+mod)%mod) nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}