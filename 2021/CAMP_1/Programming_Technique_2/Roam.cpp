#include<bits/stdc++.h>
using namespace std;
int a[100100],dp[100100];
int main() {
    int n,m,q,f,l,z,i;
    scanf("%d %d",&n,&m);
    while (m--)
    {
        scanf("%d %d",&f,&l);
        dp[f]++;
        dp[l+1]--;
    }
    for(i=1;i<=n;i++){
        dp[i]=dp[i]+dp[i-1]; 
    }
    scanf("%d",&q);
    while (q--)
    {
        scanf("%d",&z);
        printf("%d",dp[z]);
    }
    
    
    
    return 0;
}