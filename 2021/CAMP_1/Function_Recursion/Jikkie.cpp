#include<bits/stdc++.h>
using namespace std;
int A,B,C,d[30],mark[30][30][30];
void play(int a,int b,int c){
    if(a<0||a>A||b<0||b>B||c<0||c>C)     return ;
    if(mark[a][b][c])                    return ;
    mark[a][b][c]=1;
    if(a==0) d[c]=1;
    play(0,a+b,c);
    play(a-B+b,B,c);
    play(0,b,a+c);
    play(a-C+c,b,C);
    play(a+b,0,c);
    play(A,b-A+a,c);
    play(a,0,b+c);
    play(a,b-C+c,C);
    play(a+c,b,0);
    play(A,b,c-A+a);
    play(a,b+c,0);
    play(a,B,c-B+b);;
}
int main() {
    scanf("%d %d %d",&A,&B,&C);
    play(0,0,C);
    int i;
    for(i=0;i<=C;i++)
        if(d[i]==1) printf("%d ",i);   
    return 0;
}