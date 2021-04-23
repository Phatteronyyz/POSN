#include<bits/stdc++.h>
using namespace std;
int n,r,k,a[100],b[100],cnt,i,st;
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
            b[st]=i;
            permu(st + 1);
            a[i]=0;

        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin >> n >> r >> k;
    permu(0);
    return 0;
}