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

const int N = 5e5+5;
ll a[N],b[N],c[N];

void solve(){
    ll n, ans=0;
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for (ll i=1;i<=n;i++) c[i]=a[n-i+1]+b[i];
    sort(c+1,c+n+1);
    for (ll i=2;i<=n;i++) ans+=abs(c[i]-c[i-1]);
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}