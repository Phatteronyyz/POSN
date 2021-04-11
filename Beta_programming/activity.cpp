#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,i,facd=1,facn=1;
    scanf("%lld",&n);
    for(i=n;i>n/2;i--)
        facd*=i;
    for(i=1;i<=(n+1)/2;i++)
        facd/=i;
    if(n%2==0){
        printf("%lld",facd);
    }
    if(n%2==1){
        printf("%lld",facd*2);
    }
}
