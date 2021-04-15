#include<bits/stdc++.h>
using namespace std;
int dp[2][10005];
int main() {
    int n,r,k,i,j,ans;
    scanf("%d %d %d",&n,&r,&k);
    if(n==1){
        printf("%d\n",1%k); return 0;
    }
    dp[1][0]=dp[1][1]=1;
    for(i=2;i<=n;i++){
        dp[i%2][0]=dp[i%2][i]=1;
        for(j=1;j<i;j++){
            dp[i%2][j]=dp[(i-1)%2][j-1]+dp[(i-1)%2][j];
            dp[i%2][j]%=k;
        }
    }
    printf("%d\n",dp[n%2][r]%k);
    
    return 0;
}