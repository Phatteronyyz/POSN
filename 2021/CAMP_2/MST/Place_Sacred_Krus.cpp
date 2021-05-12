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

struct A{
    int u,v,w;
    bool operator < (const A& o) const{
        return w > o.w;
    }
};

A a[1000100];
int p[200100];
int fin(int i){
    if(p[i]==i) return i;
    return p[i]=fin(p[i]);
}

void solve(){
    int n,m,i,pu,pv;
    ll ans=0;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> a[i].u >> a[i].v >> a[i].w;
        a[i].w--; 
    }
    sort(a,a+m);
    for(i=1;i<=n;i++) p[i]=i;
    for(i=0;i<m;i++){
        pu=fin(a[i].u),pv=fin(a[i].v);
        if(pu!=pv)
            ans+=a[i].w,p[pu]=pv;
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}