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

int a[100005],b[100005];

void solve(){
    int n,i,ma,now,coun,st,ansst;
    char ans;
    cin >> n;
    loop0(i,n) cin >> a[i] >> b[i];
    ma=0,now=0,coun=0;
    loop0(i,n){
        if(now<=a[i]){
            if(ma<coun) ma=coun,ansst=st,ans='R';
            st=i,coun=1,now=a[i]+b[i];
        }
        else
            now=max(now,a[i]+b[i]),coun++;
    }
    if(ma<coun) ma=coun,ansst=st,ans='R';
    now=INT_MAX,coun=0;
    for(i=n-1;i>=0;i--){
        if(now>=a[i]){
            if(ma<coun) ansst=st,ma=coun,ans='L';
            else if((ma==coun)&&(ansst>=st))
                ansst=st,ma=coun,ans='L';
            st=i,coun=1,now=a[i]-b[i];
        }
        else
            now=min(now,a[i]-b[i]),coun++;
    }
    if(ma<coun)
        ansst=st,ma=coun,ans='L';
    else if((ma==coun)&&(ansst>=st))
        ansst=st,ma=coun,ans='L';
    cout<< (ansst+1) sp << ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}