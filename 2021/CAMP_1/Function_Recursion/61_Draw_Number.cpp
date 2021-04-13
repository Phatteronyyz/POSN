/*
    TASK:
    AUTHOR: Phattarawat
    SCHOOL: RYW
    LANG: C
*/
#include<bits/stdc++.h>
using namespace std;
int a[100][100],mark[1000005],sum,ans[7],cn;
void play(int i,int j,int state){
    ans[state]=a[i][j];
    if(state==5){
            sum=0;
            sum=ans[0]*100000+ans[1]*10000+ans[2]*1000+ans[3]*100+ans[4]*10+ans[5];
            if(!mark[sum]){
                cn++;
            }
            mark[sum]=1;
            return ;
    }
    if(i-1>=0) play(i-1,j,state+1);
    if(j-1>=0) play(i,j-1,state+1);
    if(j+1<5) play(i,j+1,state+1);
    if(i+1<5) play(i+1,j,state+1);
}
int main(){
    int q,i,j;
    scanf("%d",&q);
    while(q--){
        for(i=0;i<5;i++){
            for(j=0;j<5;j++)
                scanf("%d",&a[i][j]);

        }

        for(i=0;i<5;i++){
            for(j=0;j<5;j++)
                play(i,j,0);
        }


    printf("%d\n",cn);
    cn=0;
    memset(mark,0,sizeof mark);
    }
    return 0;
}
/*
1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 2 1
1 1 1 1 1
*/
