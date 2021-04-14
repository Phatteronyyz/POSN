#include<bits/stdc++.h>
using namespace std;
int st,n,r,k,a[50],b[50],cnt;
void permu(int st){
    int i;
    if(st==r){
        cnt++;
        if(cnt==k){
            for(i=0;i<r;i++)
                printf("%d ",b[i]);
            printf("\n");
        }
         return ;
    }
    for(i=1;i<=n;i++){
        if(!a[i]){
            a[i]=1;
            b[st] =i;
            permu(st+1);
            a[i]=0;
        }
    }
    
}
int main() {
    scanf("%d %d %d",&n,&r,&k);
    permu(0);
    return 0;
}