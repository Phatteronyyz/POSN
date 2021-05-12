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

int in[1000100],out[1000100];

void solve(){
    int n,q,s,e,i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> s >> e;
        in[s]++,out[e]++;
    }
    for(i=1;i<=1000000;i++)
        in[i]+=in[i-1],out[i]+=out[i-1];
    cin >> q;
    while(q--){
        cin >> s >> e;
        cout << (in[e]-out[s-1]) sp;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}