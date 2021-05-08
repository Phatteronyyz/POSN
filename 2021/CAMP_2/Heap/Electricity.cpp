#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
priority_queue<PII> he;
int dp[500100];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n,k,i,a;
    cin >> n >> k >> a;
    dp[1]=a;
    he.push(make_pair(-a,1));
    for(i=2;i<=n;i++){
        cin >> a;
        while(!he.empty() && i-he.top().second > k)
            he.pop();
        dp[i]=he.top().first*-1+a;
        he.push(make_pair(dp[i]*-1,i));
    }
    cout << dp[n];
    
    return 0;
}
