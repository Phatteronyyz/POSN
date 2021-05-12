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

char x[1010];
int mic[1010][1010];

void solve(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> x[i];
    for(int j=1;j<=n;j++){
        for(int i=j-1;i>=1;i--){
            if(x[i]==x[j]) mic[i][j]=mic[i+1][j-1]+1;
            for(int k=i;k<j;k++)
                mic[i][j]=max(mic[i][j],mic[i][k]+mic[k+1][j]);
        }
    }
    cout << mic[1][n] nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}