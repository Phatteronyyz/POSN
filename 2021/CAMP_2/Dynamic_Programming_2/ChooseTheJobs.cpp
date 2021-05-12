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

struct A{
    int s,e,w;
    bool operator < (const A& o) const{
        if(e!=o.e) return e < o.e;
        return s < o.s;
    }
};
A a[100100];
int b[100100],dp[100100];

void solve(){
    int n,i,idx;
    cin >> n;
    for(i=1;i<=n;i++)
        cin >> a[i].s >> a[i].e >> a[i].w;
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
        b[i]=a[i].e;   
    for(i=1;i<=n;i++){
        idx = lower_bound(b+1,b+n+1,a[i].s)-(b+1);
        dp[i]=max(dp[i-1],dp[idx]+a[i].w);
    } 
    cout << dp[n] nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}