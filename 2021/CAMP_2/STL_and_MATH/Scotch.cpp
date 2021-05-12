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

long long n,a,b,i,sum=0,aa,bb,cnta[2],cntb[2],cntab[2][2];

void solve(){

    cin >> n >> a >> b;
    aa=2*a;
    bb=2*b;
    for(i=0;i<n;i++){
        if((i%aa)<a){
            if(i%bb<b){
                cnta[0]++;
                cntb[0]++;
                cntab[0][0]++;
            }
            else{
                cnta[0]++;
                cntb[1]++;
                cntab[0][1]++;
            }
        }
        else{
            if(i%bb<b){
                cnta[1]++;
                cntb[0]++;
                cntab[1][0]++;
            }
            else{
                cnta[1]++;
                cntb[1]++;
                cntab[1][1]++;
            }
        }
    }
    sum=cnta[0]*cnta[0]+cnta[1]*cnta[1]+cntb[0]*cntb[0]+cntb[1]*cntb[1]
        -cntab[0][0]*cntab[0][0]
        -cntab[0][1]*cntab[0][1]
        -cntab[1][0]*cntab[1][0]
        -cntab[1][1]*cntab[1][1];
    
    cout << sum;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}