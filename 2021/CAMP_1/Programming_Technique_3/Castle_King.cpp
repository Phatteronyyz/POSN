/*
 TASK:
 LANG: C
 AUTHOR: Phattarawat
*/

#include <bits/stdc++.h>
using namespace std;
long long a[500100];
int main(){
    long long i,n,mx=0,ans=0,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum+=a[i];
        mx=max(mx,a[i]);
    }
    ans+=sum*2;
    ans+=mx*2;
    ans+=n;
    printf("%lld",ans);
    return 0;
}


