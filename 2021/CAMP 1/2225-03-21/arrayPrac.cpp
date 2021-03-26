#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
    int n,k,cn=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=1;i<=n;i++){
        if(a[i]==k) cn++;
    }
    for(i=n;i>=1;i--) printf("%d",a[i]);
    printf("\n%d",cn);



    return 0;
}
