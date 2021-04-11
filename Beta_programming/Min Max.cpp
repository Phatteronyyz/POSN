#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    printf("%d\n%d",a[0],a[n-1]);





    return 0;
}
