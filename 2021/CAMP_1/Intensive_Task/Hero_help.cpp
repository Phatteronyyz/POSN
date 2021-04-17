#include<bits/stdc++.h>
using namespace std;
int x[100100],y[100100];
int main() {
    ios::sync_with_stdio(0);
    int n,k,i,ans=0,idx;
    cin >> n >> k;
    for(i=0;i<n;i++) cin >> x[i] >> y[i];
    sort(x,x+n);
    sort(y,y+n);
    for(i=0;i<n;i++){
        idx = lower_bound(x,x+n,x[i]+k)-x;
        ans = max(ans,idx-i);
    }for(i=0;i<n;i++){
        idx = lower_bound(y,y+n,y[i]+k)-y;
        ans = max(ans,idx-i);
    }
    printf("%d",ans);

    
    return 0;
}