#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main() {
    ios::sync_with_stdio(0);

    int n,q,t,ans,i;
    cin >> n >> q;
    for(i=1;i<=n;i++) cin >> a[i];
    for(i=2;i<=n;i++){
        a[i]+=a[i-1];
    }
    for(i=n;i>1;i--){
        a[i-1]=min(a[i],a[i-1]);
    }
    while(q--){
        cin >> t;
        ans = upper_bound(a,a+n+1,t)-a;
        cout << ans-1 ;
    }
    
    return 0;
}