#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int ans[10];
int main()
{
    int i,j,mx=-10,winner;
    for(i=1;i<=5;i++){
        for(j=1;j<=4;j++){
            scanf("%d",&a[i][j]);
            ans[i]+=a[i][j];
            mx=max(mx,ans[i]);
        }
    }
    for(i=1;i<=5;i++){
        if(mx==ans[i]) winner=i;
    }
    printf("%d %d",winner,mx);

    return 0;
}

