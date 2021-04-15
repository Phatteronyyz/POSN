/*
 TASK:
 LANG: C
 AUTHOR: Phattarawat
*/

#include <bits/stdc++.h>
using namespace std;
long long a[500100];
int main(){
    long long i,n,mx=0,ans=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        if(a[i]>mx){
            mx=a[i];
        }
    }
    for(i=0;i<n;i++){
        ans+=a[i]*2;
    }
    ans+=mx*2;
    ans+=n;
    printf("%lld",ans);
    return 0;
}


