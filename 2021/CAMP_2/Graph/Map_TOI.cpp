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

struct A{
    int a,i,j;
    bool operator < (const A& o) const{
        if(i==o.i) return j < o.j;
        return i > o.i;
    }
};

queue<int > bfs;
vector <pair<int,pair<int,int>>> g[50000];
A cc[50000];

int mark[50000];
int di[4]={0,0,-1,1};
int dj[4]={1,-1,0,0};
int dir(char d){
    if(d=='U') return 3;
    if(d=='L') return 1;
    return -1;
}

void solve(){
    int n,m,i,j,k,p,a,b,f,node;
    char c;
    cin >> n >> m;
    p=n*m-1;
    loop1(i,0,p) cc[i].a=i;
    loop0(i,0,p){
        cin >> a >> c >> b;
        f=dir(c);
        g[b].push_back({a,{di[f],dj[f]}});
        g[a].push_back({b,{di[f-1],dj[f-1]}});
    }
    cc[0].i=0, cc[0].j=0;
    bfs.push(0);
    while(!empty(bfs)){
        node=bfs.front(); mark[node]=1;
        pop(bfs);
        for(auto x: g[node]){
            k=x.first;
            i=x.second.first, j=x.second.second;
            if(mark[k]) continue;
            cc[k].i=cc[node].i+i; cc[k].j=cc[node].j+j;
            bfs.push(k);
        }
    }
    sort(cc,cc+p+1);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout << cc[i*m+j].a sp;
        }
        cout nl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}