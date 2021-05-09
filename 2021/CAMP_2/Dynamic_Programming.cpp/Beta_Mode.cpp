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

char a[10100],b[10100];
int dp[2][10100];

void solve(){
    int i,j,lena,lenb,ans=-1,att;
    cin >> (a+1) >> (b+1);
    lena=strlen(a+1),lenb=strlen(b+1);
    for(i=1;i<=lena;i++){
        for(j=1;j<=lenb;j++){
            if(a[i]!=b[j]) dp[i%2][j]=0;
            else{
                dp[i%2][j]=dp[(i-1)%2][j-1]+1;
                if(dp[i%2][j]>ans)
                    ans=dp[i%2][j] , att=j;
            }
        }
    }
    for(i=att-ans+1l;i<=att;i++)
        cout << b[i];
    cout nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}