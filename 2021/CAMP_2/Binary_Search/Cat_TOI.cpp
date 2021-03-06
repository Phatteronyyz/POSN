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

using ll = long long;

typedef pair<int,int> PII;

const int mxN = 2e6+10;
ll a[mxN];

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    ll lb=0,rb=1e18;
    while(lb<rb){
        ll mb=(lb+rb)/2;
        bool ch=0;
        stack<ll> st;
        for(int i=0;i<n;++i){
            if(a[i]>mb){
                if(empty(st)) pu(a[i],st);
                else if(st.top()==a[i]) pop(st);
                else ch=1;
            }
        }
        if(empty(st)&&!ch) rb=mb;
        else lb=mb+1;
    }
    cout << lb nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}