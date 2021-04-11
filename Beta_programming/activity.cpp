#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=1;
    scanf("%d",&n);
    if(n==1||n==2){
        printf("%d",2);
        return 0;
    }
    else for(int i=0;i<n-1;i++){
        ans = ans*(i+1);
    }
    printf("%d",ans);

    return 0;
}

