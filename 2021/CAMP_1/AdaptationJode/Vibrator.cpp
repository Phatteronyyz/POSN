#include<bits/stdc++.h>
using namespace std;
int dp[50500];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    dp[0]=1;
    int c,n,num,i;
    cin >> c >> n;
    while(n--){
        cin >> num;
        for(i=c;i>=num;i--){
            if(dp[i-num])
                dp[i]=1;
        }
    }
    for(i=c;i>=1;i--){
        if(dp[i]){
            cout << i;
            return 0;
        }
    }
    
    return 0;
}