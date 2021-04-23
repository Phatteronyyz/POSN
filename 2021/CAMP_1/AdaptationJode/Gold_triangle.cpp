#include<bits/stdc++.h>
using namespace std;
long long x[100100],y[100100],a[100100][5];
map<long long,long long> mp;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    long long n,i,ii,jj,cou=0,j;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i][0] >> a[i][1];
        ii = a[i][0]; jj = a[i][1];
        x[ii]++; y[jj]++;
    }
    for(i=0;i<n;i++){
        
        ii = a[i][0]; jj = a[i][1];
        if(x[ii]>1 && y[jj]>1){
            cou += (x[ii]-1) * (y[jj]-1);
        }
    }
    cout << cou;

    return 0;
}