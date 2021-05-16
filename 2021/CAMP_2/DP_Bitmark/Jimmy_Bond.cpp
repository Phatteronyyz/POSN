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

double pos[25][25],dp[25][1100000];
int n;

double play(int now,int bit){
    if(now==n)  return 1;
    if(dp[now][bit]!=-1)    return dp[now][bit];
    double ma=0;
    int i;
    for(i=0;i<n;i++)
        if((bit&(1<<i))==0)
            ma=max(ma,pos[now][i]*play(now+1,bit|(1<<i)));
    return dp[now][bit]=ma;
}

void solve(){
    int i,j;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> pos[i][j];
            pos[i][j]/=100;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<(1<<n);j++){
            dp[i][j]=-1;
        }
    }
    cout << setdcm(2) << (play(0,0)*100);
    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}