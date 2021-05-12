#include<bits/stdc++.h>
using namespace std;

#define sz(a) (int)a.size()
#define pu(b,a) a.push(b)
#define pop(a) a.pop()
#define setdcm(a) fixed << setprecision(a)
#define empty(a) a.empty();
#define mxheap priority_queue<int, vector<int> >
#define mnheap priority_queue<int, vector<int> , greater<int> >
#define nl << "\n"
#define sp << " "
#define loop0(i,a) for(i=0;i<a;i++)
#define loop1(i,a) for(i=1;i<=a;i++)

using ll = long long;

typedef pair<int,int> PII;

ll a[25],b[25];

void solve(){
    ll n,t=0,sum,i;
    a[0]=1;
    loop1(i,20) a[i]=a[i-1]*3;
    b[0]=1;
    loop1(i,20) b[i]=a[i]+b[i-1];
    cin >> n;
    sum=n;
    while(1){
        loop0(i,20)
            if(b[i]+n<a[i+1])
                break;
        n=abs(n-a[i]),t++;
        sum+=a[i];
        if(n==0) break;
    }
    cout << t sp << (sum/2) nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}