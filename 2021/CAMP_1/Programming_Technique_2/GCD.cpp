#include<bits/stdc++.h>
using namespace std;
int main() {
    int q,i,ans,num;
    scanf("%d %d",&q,&ans);
    for(i=0;i<q-1;i++){
        scanf("%d",&num);
        ans=__gcd(ans,num);
    }
    printf("%d\n",ans);
    
    return 0;
}