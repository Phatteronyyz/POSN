#include<bits/stdc++.h>
using namespace std;
long long a[1000],b[1000];
int main() {
    ios::sync_with_stdio(0);
    long long n,i,ans=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        cin >> b[i];
    }
    sort(b,b+n,greater<int>());
    for(i=0;i<n;i++){
        ans+=(a[i]*b[i]);
    }
    printf("%lld",ans);
    return 0;
}