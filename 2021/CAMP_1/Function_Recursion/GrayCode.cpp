#include<bits/stdc++.h>
using namespace std;
int k,w,l,a[10000000],b[10000000];
void sport(int st){
    if(st==k){
        for(int i=0;i<st;i++){
            if(a[i]+a[i-1]==2) printf("0 ");
            else printf("%d ",a[i]+a[i-1]);
        }
        printf("\n");
        return ;
    }  
    a[st]=0;
    sport(st+1);
    a[st]=1;
    sport(st+1);
}
int main() {
    int q;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&k);
        sport(0);
    }
    
    return 0;
}