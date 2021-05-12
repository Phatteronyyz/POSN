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

int a[30],ch,mark[60],n,m,p;

void play(int st,int fin){
    int i,j;
    if(ch==1) return ;
    if(st==m+1){
        ch=1;
        return ;
    }
    if(st==m){
        if(mark[n]==1) return;
        a[st]=n;
        mark[a[st]+p]=1;
        play(st+1,n);
        mark[a[st]+p]=0;
        return;
    }
    for(i=fin+1;i<=n-(m-st);i++){
        if(mark[i]==1) continue;
        a[st]=i;
        mark[a[st]+p]=1;
        play(st+1,i);
        mark[a[st]+p]=0;
        if(ch==1) return;
    }
}

void solve(){
    cin >> n >> m >> p;
    memset(a,0,sizeof a);
    memset(mark,0,sizeof mark);
    mark[p]=1;
    ch=0;
    play(1,0);
    if(ch==1) cout << "no" nl;
    else cout << "yes" nl;  
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