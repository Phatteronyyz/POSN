#include<bits/stdc++.h>
using namespace std;
int a[5100];
int main() {
    ios::sync_with_stdio(0);
    int n,k,cnt=0,aok=0,ber,fi,la;
    a[0]=1;
    cin >> n >> k;
    if(k<=n){
        printf("%d",k);
        a[k]=1;
        la=k;
        n-=1;
    }
    else{
        printf("%d",n%k);
        a[k]=1;
        la=k;
        n-=1;
    }
    
    return 0;
}