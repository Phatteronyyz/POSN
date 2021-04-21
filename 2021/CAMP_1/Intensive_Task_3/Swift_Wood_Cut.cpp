#include<bits/stdc++.h>
using namespace std;
long long a[1001000];
int main() {
    ios::sync_with_stdio(0);
    long long n,b,i,r,l,sum,mid;
    cin >> n >> b;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    l=0,r=1e18;
    while(l<r){
        mid=(l+r+1)/2;
        for(i=0,sum=0;i<n;i++){
            if(mid < a[i]){
                sum+= a[i]-mid;
            }
        }   
        if(sum>=b) l=mid;
        else r=mid-1;
    }
    printf("%lld\n",l);
    
    return 0;
}