#include<bits/stdc++.h>
using namespace std;
int a[2100];
int main() {
    ios::sync_with_stdio(0);
    int n,k,i,ans=0;
    cin >> n >> k;
    for(i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,greater<int>());
    for(i=0;i<n;i+=k) ans+=a[i];
    printf("%d\n",ans);
    
    return 0;
}