#include<bits/stdc++.h>
using namespace std;
int a[300000];
int main() {
    int n,m,i,k,rk;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    while(m--){
        scanf("%d",&k);
        rk=upper_bound(a,a+n,k)-a;
        printf("%d",n-rk+1);
    }
    return 0;
}