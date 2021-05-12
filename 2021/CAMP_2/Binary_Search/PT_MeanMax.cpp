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

double a[300100],qs[300100],mi[300100];

void solve(){
    int n,k,ch;
    cin >> n >> k;
    loop1(i,1,n) cin >> a[i];
    double l=0,r=1e6,mid;
    while((r-l)>1e-6){
        ch=0;
        mid=(l+r+(1e-6))/2;
        loop1(i,1,n){
            qs[i]=a[i]-mid+qs[i-1];
            mi[i]=min(qs[i],mi[i-1]);
            if(i>=k&&qs[i]-mi[i-k]>=0){
                ch=1;
                break;
            }
        }
        if(ch) l=mid;
        else r=mid-(1e-6);
    }
    cout << setdcm(1) << r nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}