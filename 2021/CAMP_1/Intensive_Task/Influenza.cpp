#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100],c[100100];
int main() {
    ios::sync_with_stdio(0);
    int n,i,mx=-1e9-2;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i];
    for(i=0;i<n;i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(i=0;i<n;i++) c[i]=min(a[i],b[i]);
    for(i=0;i<n;i++) mx=max(c[i],mx);
    printf("%d",mx);
    
    return 0;
}