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

int l[100100],r[100100],a[100100];

void solve(){
    int q,n,i,sum,ans,Ma;
    cin >> q;
    while(q--){
        cin >> n;
        for(i=1;i<=n;i++) cin >> a[i];
        Ma=ans=-1000000000;
        for(i=1,sum=0;i<=n;i++){
            sum+=a[i];
            sum=max(sum,0);
            Ma=max(sum,Ma);
            l[i]=Ma;
        }
        Ma=ans=-1000000000;
        for(i=n,sum=0;i>=1;i--){
            sum+=a[i];
            sum=max(sum,0);
            Ma=max(sum,Ma);
            r[i]=Ma;
        }
        for(i=1;i<=n;i++) ans=max(l[i]+r[i+1],ans);
        cout << ans nl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}