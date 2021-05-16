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

vector<PII > v[105];
int p[105];
int mic[105][105];
vector<int > child[105];

void dfs(int now){
    for(auto x:v[now]){
        if(p[x.first]==-1){
            p[x.first]=x.second;
            child[now].push_back(x.first);
            dfs(x.first);
        }
    }
}

int play(int now,int k){
    if(mic[now][k]!=-1) return mic[now][k];
    if(k==0) return 0;
    if(child[now].size()==0) return p[now];
    if(child[now].size()==1)
        return mic[now][k]=play(child[now][0],k-1)+p[now];
    int Max=-1;
    for(int i=0;i<=k-1;i++){
        Max=max(Max,play(child[now][0],i)+play(child[now][1],k-i-1)+p[now]);
    }
    return mic[now][k]=Max;
}

void solve(){
    int n,k,s,e,val;
    memset(p,-1,sizeof p);
    memset(mic,-1,sizeof mic);
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> s >> e >> val;
        v[s].push_back({e,val});
        v[e].push_back({s,val});
    }
    p[1]=0;
    dfs(1);
    cout << play(1,k+1) nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}