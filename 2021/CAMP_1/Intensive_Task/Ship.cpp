#include<bits/stdc++.h>
using namespace std;
int x[550],y[550];
int main() {
    ios::sync_with_stdio(0);
    int n,i,ans=0;
    cin >> n;
    for(i=1;i<=n;i++) cin >> x[i] >> y[i];
    sort(x+1,x+n+1);
    sort(y+1,y+n+1);
    for(i=1;i<=n;i++) ans+= abs(x[i]-i) + abs(y[i]-i);
    printf("%d\n",ans);
    
    return 0;
}