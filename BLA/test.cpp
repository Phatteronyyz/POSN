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

int b[5]={0,3,5,5,6};
int a[5]={0,1,2,4,4};

void solve(){
    int idx;
    for(int i=1;i<=4;i++){
        idx = lower_bound(b+1,b+5+1,a[i])-(b+1);
        cout << idx sp;
    }
    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}