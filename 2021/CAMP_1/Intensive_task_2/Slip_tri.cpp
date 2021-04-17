#include<bits/stdc++.h>
using namespace std;
int a[10100][10100];
int main() {
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin >> a[i][j];
        }
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
        }
    }
    printf("%d",a[1][1]);
    
    return 0;
}