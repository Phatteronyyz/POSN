#include<bits/stdc++.h>
using namespace std;
int ans[100100];
int main() {
    ios::sync_with_stdio(0);
    int q,a,ct=0,i;
    cin >> a;
    if(a==0){
        printf("10");
        return 0;
    }
    if(a==1){
        printf("1");
        return 0;
    } 
    for(i=9;i>1;i--){
        while(a%i==0){
            ans[ct++]=i;
            a/=i;
        }

    }
    sort(ans,ans+ct);
    if(a==1) for(i=0;i<ct;i++) printf("%d",ans[i]);
    else printf("-1");

    

    return 0;
}