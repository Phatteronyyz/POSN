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

ll a[10100];

void solve(){
    ll q,n;
    ll k,cnt;
    cin >> q;
    while(q--){
        cin >> n >> k;
        loop1(i,1,n){
            cin >> a[i];
        }
        sort(a+1,a+1+n);
        ll l=0,r=2e9,dis;
        while(l<r){
            ll mid=(l+r)/2;
            cnt=(mid+1)*(mid+1);
            loop1(i,2,n){
                if(a[i]==a[i-1]) continue;
                cnt+=(mid+1)*(mid+1);
                dis=a[i]-a[i-1]-1;
                if(dis%2){
                    dis/=2;
                    if(mid>dis){
                        dis=mid-dis;
                        cnt-=(dis*dis);
                    }
                }
                else{
                    dis/=2;
                    if(mid>dis){
                        dis=mid-dis;
                        cnt-=(dis*(dis+1));
                    }
                }
            }
            if(cnt>=k) r=mid;
            else l=mid+1;
        }
        cout << l nl;
    }
    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}