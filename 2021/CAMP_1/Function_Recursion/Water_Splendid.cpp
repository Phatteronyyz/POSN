#include<bits/stdc++.h>
using namespace std;
int a[50],cnt,b,c,ans[1000000][150],ans2[1000];
void play(int sum,int st){
    int i,j;
    if(st>c||sum>b) return;
    if(sum==b){
        ans[cnt][0]=st;
        for(i=0;i<st;i++){
            ans[cnt][i+1]=ans2[i];
        }
        cnt++;
        return;
    }
    ans2[st]=a[0]; play(sum+a[0],st+1); 
    ans2[st]=a[1]; play(sum+a[1],st+1); 
    ans2[st]=a[2]; play(sum+a[2],st+1); 
    ans2[st]=a[3]; play(sum+a[3],st+1); 
    ans2[st]=a[4]; play(sum+a[4],st+1); 
    ans2[st]=a[5]; play(sum+a[5],st+1);
    return ;
}
int main() {
    int i,j;
    scanf("%d %d",&b,&c);
    scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    play(0,0);
    printf("%d\nE\n",cnt);
    for(i=0;i<cnt;i++){
        printf("%d ",ans[i][0]);
        for(j=1;j<=ans[i][0];j++){
            printf("%d ",ans[i][j]);
        }
        printf("\nE\n");
    }
    
    return 0;
}