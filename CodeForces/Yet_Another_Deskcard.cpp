#include<bits/stdc++.h>
using namespace std;
int a[100];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,i,k,e,q;
    cin >> n >> q;
    for(i=0;i<n;i++){
        cin >> k;
        if(a[k]==0){
            a[k]=i;
        } 
    }
    while(q--){
        cin >> e;
        cout << a[e] << " ";
        for(i=0;i<50;i++){
            if(a[i]<a[e]){
               a[i]++; 
            } 
            a[e]++;
        } 
    }

    return 0;
}