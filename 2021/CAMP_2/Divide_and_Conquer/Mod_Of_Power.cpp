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

ll ModofPower(ll a,ll b,ll c){
    if(b==1) return a%c;
    ll t = ModofPower(a,b/2,c);
    if(b%2==0) return (t*t)%c;
    else       return (t*t*a)%c;
}

void solve(){

    ll q,a,b,c;
    cin >> q;
    while(q--){
        cin >> a >> b >> c;
        cout << ModofPower(a,b,c) nl;
    }
    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}