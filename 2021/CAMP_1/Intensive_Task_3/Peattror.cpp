#include<bits/stdc++.h>
using namespace std;
long long dp[10];
char a[1000100];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int len,i;
    cin >> a;
    len=strlen(a);
    dp[0]=1;
    for(i=0;i<len;i++){
        if(a[i]=='p') dp[1]+=dp[0],dp[1]%=2555;
        if(a[i]=='e') dp[2]+=dp[1],dp[2]%=2555;
        if(a[i]=='a') dp[3]+=dp[2],dp[3]%=2555;
        if(a[i]=='t') dp[4]+=dp[3],dp[4]%=2555;
        if(a[i]=='r') dp[5]+=dp[4],dp[5]%=2555,dp[7]+=dp[6],dp[7]%=2555;
        if(a[i]=='o') dp[6]+=dp[5],dp[6]%=2555;
    }
    cout << dp[7];
    
    return 0;
}