#include<bits/stdc++.h>
using namespace std;
int dp[200000],a[200000];
int main() {
    int n,q,i,f,l,ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        dp[i]=dp[i-1]+a[i];
    }
    scanf("%d",&q);
    while (q--)
    {
        scanf("%d %d",&f,&l);
        ans=dp[l]-dp[f-1];
        printf("%d",ans);
    }

    
    
    
    return 0;
}