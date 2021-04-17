#include<bits/stdc++.h>
using namespace std;
int x[50010],y[50010];
int main() {
    ios::sync_with_stdio(0);
    int n,m,i,j,num,ans=0;;
    cin >> n >> m;
    for(i=0;i<n;i++) cin >> x[i] >> y[i];
    sort(x,x+n);
    sort(y,y+n);
    while(m--){
        cin >> num;
        i=lower_bound(x,x+n,num)-x;
        j=upper_bound(y,y+n,num)-y;
        ans += i-j;
        ans%=2007;
    }
    cout << ans;
    
    return 0;
}