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
#define loop0(i,a) for(i=0;i<a;i++)
#define loop1(i,a) for(i=1;i<=a;i++)

using ll = long long;

typedef pair<int,int> PII;

const int Max = 100000;
int coins[]={1,5,10,25,50};
vector<ll> dp(Max,0);

void solve(){
    int i,j,from,n,q;
    dp[0]=1;
    for(i=0;i<5;++i){
        for(from =0,j=coins[i];j<=Max;++from,++j){
            dp[j]+=dp[from]%1000003,dp[j]%=1000003;
        }
    }
    cin >> q;
    while(q--){
        cin >> n;
        cout << (dp[n]%1000003) nl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}