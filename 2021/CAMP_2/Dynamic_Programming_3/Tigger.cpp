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

int dp[1010][1010],a[1010],n;

int play(int now,int last){
    if(now<1||now>n)  return 1000000000;
    if(dp[now][last]) return dp[now][last];
    if(now==n)        return a[now];
    return dp[now][last]=a[now]+min(play(now+last+1,last+1),play(now-last,last));
}

void solve(){
    cin << n;
    for(int i=1;i<=n;i++) cin >> a[i];
    cout << play(2,1) nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}