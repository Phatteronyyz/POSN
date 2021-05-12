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

stack<int > st;
int s[100100];

void solve(){
    int n,i,cnt=0,mx=0,cc=0;
    char p;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> p;
        if(p=='(') pu(-1,st);
        else if(p==')'){
            cnt++;
            if(!empty(st)&&st.top()==-1) pu(0,st);
            cc=st.top(); pop(st);
            while(!empty(st)&&st.top()!=-1){
                cc=max(cc,st.top()); pop(st);
            }
            if(!empty(st)&&st.top()==-1){
                pop(st); pu(++cc,st);
            }
            s[cc]++; mx=max(mx,cc);
        }
    }
    cout << cnt nl << mx nl;
    for(i=1;i<=mx;i++) cout << s[i] sp;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}