#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    int n,a,i,sum=0,mx=-2e9,st=1,en,ans;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a;
        sum+=a;
        if(sum>mx){
            mx=sum;
            en=i;
        }
        if(sum<0){
            sum=0;
            st=i+1;
        }
    }
    printf("%d %d\n%d",st,en,mx);


    
    return 0;
}