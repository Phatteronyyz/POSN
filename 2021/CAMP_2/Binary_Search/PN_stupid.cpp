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

using ll = long long;

typedef pair<int,int> PII;

void solve(){
    ll s,m;
    cin >> s >> m;
    ll l=0,r=s/2,ch=1;
    while(l<=r){
        ll mid=(l+r)/2,b=s-mid;
        if(mid*b>m||mid*b/b!=mid)
            r=mid-1;
        else if(mid*b<m)
            l=mid+1;
        else{
            cout << mid sp << b nl;
            ch=0;
            break;
        }
    }
    if(ch)
        cout << "No answer" nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int q;
    cin >> q;
    while(q--){
        solve();
    }

    return 0;
}