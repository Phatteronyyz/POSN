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

struct A{
    ll nu, att;
    bool operator<(const A&o) const{
        return nu<o.nu;
    }
};
A a[100100];
ll b[100100],c[100100],mark[100100],ch[100100];

void solve(){
    ll n, m, cnt, ans, idx, i, num, j;
    cin>>n>>m;
    cnt=n;
    for (i=1;i<=n;i++) {
        cin>>a[i].nu;
        a[i].att=i;
    }
    sort(a+1,a+n+1);
    for (i=1;i<=n;i++) {
        b[i]=a[i].nu, c[i]=a[i].att;
    }
    for (j=1;j<=m;j++) {
        cin>>num;
        ans=0;
        for (i=cnt;i>=1;i--) {
            if (b[i]<=num) {
                cnt=i;break;
            }
            if (mark[c[i]]&&mark[c[i]]!=j) continue;
            if (mark[c[i]]!=j) ans++,mark[c[i]]=j;
            if (c[i]+1<=n&&!mark[c[i]+1]) ans++, mark[c[i]+1]=j;
            if (c[i]-1>=1&&!mark[c[i]-1]) ans++, mark[c[i]-1]=j;
        }
        cout<<ans<<endl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}