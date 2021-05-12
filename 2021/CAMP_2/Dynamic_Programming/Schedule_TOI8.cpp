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

int minu[1001][1010],day[1010][1010],a[1010],b[1010];

void solve(){
    int m,n,daya,dayb,mina,minb,i,j;
    cin >> m >> n;
    for(i=1;i<=n;i++) cin >> a[i];
    for(i=1;i<=n;i++) cin >> b[i];
    for(i=1;i<=n;i++){
        day[0][i]=day[0][i-1]; minu[0][i]=minu[0][i-1];
        if(minu[0][i]+b[i]>m)  minu[0][i]=b[i],day[0][i]++;
        else                   minu[0][i]+=b[i];
    }
    for(i=1;i<=n;i++){
        day[i][0]=day[i-1][0]; minu[i][0]=minu[i-1][0];
        if(minu[1][0]+a[i]>m)  minu[i][0]=a[i],day[i][0]++;
        else                   minu[i][0]+=a[i];
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            daya=day[i-1][j],mina=minu[i-1][j]+a[i];
            if(mina>m) mina=a[i],daya++;
            
            dayb=day[i][j-1],minb=minu[i][j-1]+b[j];
            if(minb>m) minb=b[j],dayb++;

            if(daya<dayb || daya==dayb && mina<minb){
                minu[i][j]=mina; day[i][j]=daya;
            }
            else minu[i][j]=minb, day[i][j]=dayb;
        }
    }
    cout << day[n][n]+1 nl << minu[n][n] nl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}