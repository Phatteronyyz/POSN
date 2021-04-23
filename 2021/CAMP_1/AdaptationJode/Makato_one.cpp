#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,q,i,num,r,s;
    cin >> n >> q;
    for(i=1;i<=n;i++){
        cin >> num;
        a[i]=(a[i-1] ^ num);
    }
    while(q--){
        cin >> r >> s;
        cout << (a[s]^a[r-1]);
    }
    
    return 0;
}