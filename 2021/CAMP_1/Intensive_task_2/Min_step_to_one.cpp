#include<bits/stdc++.h>
using namespace std;
int dp[1001000];
int main() {
    ios::sync_with_stdio(0);
    int i,n,q;
    for(i=1;i<=1000000;i++){
        dp[i]=dp[i-1] + 1;
        if(i%2==0) dp[i]=min(dp[i],dp[i/2]+1);
        if(i%3==0) dp[i]=min(dp[i],dp[i/3]+1);
    }
    cin >> q;
    while(q--){
        cin >> n;
        printf("%d\n",dp[n]-1);
    }
    
    return 0;
}