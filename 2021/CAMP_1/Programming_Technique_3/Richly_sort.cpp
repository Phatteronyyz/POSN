#include<bits/stdc++.h>
using namespace std;
struct A
{
    int x,y;
    bool operator < (const A& o)const{
        if(x!=o.x) return x<o.x;
        else return y>o.y;
    }
};
A b[100100];
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&b[i].x,&b[i].y);
    }
    sort(b,b+n);
    for(i=0;i<n;i++){
        printf("%d %d\n",b[i].x,b[i].y);
    }

    
    return 0;
}

/*
5
1 4
2 7
3 9
1 8
2 4
*/