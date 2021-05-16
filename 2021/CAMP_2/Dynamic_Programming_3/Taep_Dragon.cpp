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

int dp[30][30],a[30][30];

void solve(){
    int r,c,k,p,i,j,sum;
     cin >> r >> c >> k >> p;
        for(i=1;i<=r;i++)
            for(j=1;j<=c;j++)
                a[i][j]=1;
        while(--k){
            for(i=1;i<=r;i++)
                for(j=1;j<=c;j++)
                    dp[i][j]=(a[i][j]+a[i][j-1]+a[i-1][j]+a[i][j+1]+a[i+1][j])%p;
            for(i=1;i<=r;i++)
                for(j=1;j<=c;j++)
                    a[i][j]=dp[i][j];
        }
        for(i=1,sum=0;i<=r;i++)
            for(j=1;j<=c;j++)
                sum+=a[i][j],sum%=p;
        cout << sum << "\n";
        memset(a,0,sizeof a);
        memset(dp,0,sizeof dp);
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