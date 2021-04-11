#include<bits/stdc++.h>
using namespace std;
int a[11000],b[11000];
int main() {
    int n,q,mx=-10;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&q);
        a[q]++;
    }
    for(int i=0 ; i<10010 ; i++){
        mx=max(mx,a[i]);
    }
    for(int i=0 ; i<10010 ; i++){
        if(a[i]==mx) printf("%d ",i);
    }
    
    return 0;
}