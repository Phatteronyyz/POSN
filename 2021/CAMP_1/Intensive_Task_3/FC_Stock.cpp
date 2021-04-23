#include<bits/stdc++.h>
using namespace std;
int dp[10000100],a[10000100];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,q,r,s,i;
    cin >> n ;
    for(i=1;i<=n;i++){
        cin >> a[i];
        dp[i]+=dp[i-1];
        if(a[i]>a[i-1]) dp[i]+=a[i]-a[i-1];
    }
    cin >> q;
    while(q--){
        cin >> r >> s;
        cout << dp[s]-dp[r] << "\n";
    }
    

    
    return 0;
}