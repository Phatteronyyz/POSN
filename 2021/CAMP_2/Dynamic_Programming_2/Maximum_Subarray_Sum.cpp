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

int a[505][505],qs[505][505],ans,mall=-1e9;

void solve(){
    int i,j,n,mx,k;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin >> a[i][j];
            qs[i][j]=qs[i][j-1]+a[i][j],mall=max(a[i][j],mall);
        }
    }
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            for(k=1,mx=0;k<=n;k++){
                if(mx+qs[k][j]-qs[k][i-1]>=0) mx+=(qs[k][j]-qs[k][i-1]);
                else mx=0;
                ans=max(mx,ans);
            }
        }
    }
    if(mall<0) cout << mall nl;
    else cout << ans nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}