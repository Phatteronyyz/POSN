#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,cnt=0,a=0;
    scanf("%d %d",&x,&y);
    if(y<x) cnt=2;
    else for(int i=0;i<y;i++){
        cnt++;
        a+=x;
        if(a>=y) break;
    }
    printf("%d",cnt);

    return 0;
}

