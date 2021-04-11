#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
    int i;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+4);
    int ans;
    ans=a[0]*a[2];
    printf("%d",ans);

    return 0;
}

