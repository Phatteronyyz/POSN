#include<bits/stdc++.h>
using namespace std;
int a[1100];
int main() {
    int n,i,k,cn=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(a[i]==k) cn++;
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n%d",cn);
    return 0;
}