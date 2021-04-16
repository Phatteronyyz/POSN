#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main() {
    int n,m,i,q,w;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    while (q--)
    {
        scanf("%d",&m);
        w=upper_bound(a,a+n,m)-a;
        printf("%d",w);

    }
    
    
    return 0;
}