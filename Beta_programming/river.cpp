#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    long double sum=0,mn=2e9,a,ans;
    int i,n;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        sum += a;
        mn = min(mn,a);
    }
    ans = sum+(n-2)*mn-mn;
    cout << ans;
    
    return 0;
}