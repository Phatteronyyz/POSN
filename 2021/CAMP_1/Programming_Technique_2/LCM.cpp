#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main() {
    long long q,i,ans,num;
    scanf("%lld %lld",&q,&ans);
    for(i=0;i<q-1;i++){
        scanf("%lld",&num);
        ans=ans*num/gcd(ans,num);
    }
    printf("%lld\n",ans);
    
    return 0;
}