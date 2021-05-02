#include<bits/stdc++.h>
using namespace std;
int a[10100];
double dp[10100];
int main() {
    //ios::sync_with_stdio(0); cin.tie(0);
    int n,m;
    double ans=0;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
        dp[i+1]=dp[i]+a[i];
    }
    for(int i=m;i<=n;i++){
            ans=((dp[i]-dp[i-m])/m);  
            printf("%lf ",ans);
            ans=0;
    }
    cout << "\n";
    
    return 0;
}