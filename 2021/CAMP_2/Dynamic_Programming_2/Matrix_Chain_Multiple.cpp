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

int row[20],col[20],dp[20][20],path[20][20];

void prin(int l,int r){
    if(l==r){
        cout << "A" << (l+1);
        return ;
    }
    cout << "(";
    prin(l,path[l][r]);
    cout << " x ";
    prin(path[l][r]+1,r);
    cout << ")";
}

void solve(){
    int n,i,j,k,m,mi,now;
    cin >> n;
    for(i=0;i<n;i++) cin >> row[i] >> col[i];
    for(m=1;m<n;m++){
        for(i=0;i<n-m;i++){
            j=i+m;
            mi=1<<30;
            for(k=i;k<j;k++){
                now=dp[i][k]+dp[k+1][j]+row[i]*col[k]*col[j];
                if(now<mi) mi=now,path[i][j]=k;
            }
            dp[i][j]=mi;
        }
    }
    cout << dp[0][n-1] nl;
    prin(0,n-1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}