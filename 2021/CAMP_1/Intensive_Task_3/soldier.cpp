#include<bits/stdc++.h>
using namespace std;

struct A
{
    int id , time ,rank;
    bool operator < (const A& o) const{
        if(rank!=o.rank) return rank < o.rank;
        else return time > o.time;
    }
};
A x;

int main() {
    ios::sync_with_stdio(0);
    priority_queue <A > pq;
    int n,r,z,i,d,rk,t=0;
    cin >> n >> r;                                  
    for(i=1;i<=n;i++){
        cin >> z;
        if(z==2){
            if(!pq.empty()){
                printf("%d\n",pq.top().id);
                pq.pop();
			}
            else if(pq.empty()){
                printf("-1\n");
            } 
        }
		else if(z==1){
            t++;
            cin >> d >> rk;
            pq.push({d,t,rk});
		}
    }

    return 0;
}