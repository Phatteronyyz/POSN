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

int dp[300];

void solve(){
    int n,k,p,i,w,r,m;
    cin >> n >> k;
    p=1<<k;
    for(i=1;i<=p;i++) dp[i]=1<<30;
    while(n--){
        cin >> w;
        m=0;
        for(i=0;i<k;i++){
            cin >> r;
            m*=2;
            if(r==1) m++;
        }
        for(i=0;i<=p;i++){
            dp[i|m]=min(dp[i|m],dp[i]+w);
        }
    }
    cout << dp[p-1] nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}