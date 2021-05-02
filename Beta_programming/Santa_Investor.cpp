#include<bits/stdc++.h>
using namespace std;
int a[10001000],sum[10001000];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        sum[i]=a[i+1]-a[i];
        //cout << sum[i] << " ";
        if(sum[i]>0) ans+=sum[i];
    }
    cout << ans;
    
    return 0;
}