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

char a[1010];
int dp[1010][1010];

void solve(){
    int i,len,j,k,Ma=1,att=0;
    cin >> a;
    len=strlen(a);
    for(i=0;i<len;i++) dp[i][i]=1;
    for(i=len-2;i>=0;i--)
        if(a[i]==a[i+1])
            dp[i][i+1]=1,Ma=2,att=i;
    for(k=0;k<=len;k++){
        for(i=0;i<=len-k;i++){
            j=i+k-1;
            if(dp[i+1][j-1]==1 && a[i]==a[j]){
                dp[i][j]=1;
                if(k>Ma) Ma=k,att=i;
            }
        }
    }
    for(i=att;i<att+Ma;i++) cout << a[i];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}