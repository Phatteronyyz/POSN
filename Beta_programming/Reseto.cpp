#include<bits/stdc++.h>
using namespace std;

int a[2000];

int main()
{
    int n,k,cnt=0;
    scanf("%d %d",&n,&k);
    int i,j;
    for(i=2;i<=n;i++){
        for(j=i;j<=n;j+=i){
            if(a[j]==0){
                a[j]=1;
                cnt++;
                if(cnt==k) printf("%d",j);
            }
        }
    }


    return 0;
}

