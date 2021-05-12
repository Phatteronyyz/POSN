#include <bits/stdc++.h>
using namespace std;
int x[1010];
int dp[1010];
int previ[1010];
int ans[1010];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x[i]);
    }
    x[0] = -500;
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(x[i]>x[j] && dp[j]+1> dp[i]){
                dp[i] = dp[j] + 1;
                previ[i] = j;
            }
        }
    }
    int mx=-1,st=-1,cnt=0;
    for(int i=1;i<=n;i++){
        if(mx<dp[i]){
            mx=dp[i];
            st=i;
        }
    }
    while(st>0){
        ans[cnt++] = x[st];
        st = previ[st];
    }
    printf("%d\n",cnt);
    for(int i= cnt-1;i>=0;i--){
        printf("%d ",ans[i]);
    }

	return 0;
}
