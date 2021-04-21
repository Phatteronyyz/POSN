#include<bits/stdc++.h>
using namespace std;
struct A
{
    int num , time;
    bool operator < (const A& o) const{
        if(time!=o.time) return time>o.time;
        else return num>o.num;
    }
};
int main() {
    ios::sync_with_stdio(0);
    priority_queue <A > pq;
    int n,k,t,i;
    A z;
    cin >> n >> k;
    for(i=1;i<=k;i++){
        pq.push({i,1});
    }
    for(i=1;i<=n;i++){
        cin >> t;
        printf("%d",pq.top().num);
        z=pq.top();
        pq.pop();
        z.time+=t;
        pq.push(z);
    }
    

    return 0;
}