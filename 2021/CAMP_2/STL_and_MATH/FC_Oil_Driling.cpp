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
#define loop0(i,a) for(i=0;i<a;i++)
#define loop1(i,a) for(i=1;i<=a;i++)

using ll = long long;

typedef pair<int,int> PII;

set<int> s;
set<int>::iterator it,it2;

void solve(){
    int n,k,x;
    cin >> n >> k;
    while(k--){
        cin >> x;
        if(empty(s)){
            cout << n nl;
        } 
        else{
            it = it2 =s.lower_bound(x);
            it--;
            if(it2==s.begin()){
                cout << ((*it2)-x) nl;
            }
            else if(it2==s.end()){
                cout << (x-(*it)) nl;
            }
            else{
                cout << min((*it2)-x,x-(*it)) nl;
            } 
        }
        s.insert(x);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); //cout.tie(0);
    solve();
    
    return 0;
}