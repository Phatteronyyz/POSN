#include<bits/stdc++.h>
using namespace std;
struct A
{
    int x,fre,y;
    bool operator < (const A& o) const{
        if(fre!=o.fre) return fre>o.fre;
        else return y<o.y;
    }
    
};
A a[1100];
int main() {
    ios::sync_with_stdio(0);
    int n,c,ch=0,x,i,j,cnt=0;
    cin >> n >> c;
    for(i=0;i<n;i++){
        ch=0;
        cin >> x;
        for(int j=0;j<cnt;j++){
            if(a[j].x==x) a[j].fre++,ch=1;
        }
        if(!ch) a[cnt++]={x,1,i};
    }
    sort(a,a+n);
    for(i=0;i<cnt;i++){
        for(j=0;j<a[i].fre;j++){
            printf("%d ",a[i].x);
        }
    }
    
    return 0;
}