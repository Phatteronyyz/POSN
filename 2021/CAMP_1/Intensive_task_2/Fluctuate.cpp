#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int mn=1e9,n,i,ans=0,now;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> now;
        ans =max(ans,now-mn);
        mn =min(now,mn);
    }
    cout << ans;
    
    return 0;
}