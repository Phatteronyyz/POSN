#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010],x,y,xe,ye;
int main(){
    ios::sync_with_stdio(0);
   int w,h,n,i,j;
   cin w >> h >> n;
   for(i=1;i<=n;i++){
        cin >> x >> y >> xe >>ye;
        xe++; ye++;
        dp[y][x]+=1;
        dp[ye][xe]+=1;
        dp[y][xe]+=1;
        dp[ye][x]+=1;
   }
   for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
   }
   for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            printf("%d",dp[i][j]%2);
        }
        printf("\n");
   }


    return 0;
}