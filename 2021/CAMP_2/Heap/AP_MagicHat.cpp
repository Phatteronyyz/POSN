#include<bits/stdc++.h>
using namespace std;

struct A
{
    int w,v,d,x,typ,ch;
    bool operator < (const A& o) const{
        if(w!=o.w) return w > o.w;
        else return d > o.d;
    }
};
struct B
{
    int w,v,d,x,typ,ch;
    bool operator < (const B& o) const{
        if(d!=o.d) return d > o.d;
        else return w > o.w;
    }
};

int mark[1000100];
priority_queue<A > pq;
priority_queue<B > pq3;

int main() {
    
    ios::sync_with_stdio(0); cin.tie(0);

    int w,v,d,x,ch=1;
    int n,m,sumnm,o,i,time=0;
    int weight,value,chm;
    cin >> n >> m;
    sumnm=n+m;

    for(i=1;i<=sumnm;i++){
        
        cin >> o;
        if(o==1){
            int typ;
            cin >> typ;
            if(typ==1){
                cin >> w >> v;
                pq.push({w,v,1000100,w,1,0});
            }
            else if(typ==2){
                cin >> w >> v >> d;
                pq.push({w,v,d,w,2,0});
            }
            else if(typ==3){
                cin >> w >> v >> d >> x;
                pq.push({w,v,d,x,3,ch});
                pq3.push({w,v,d,x,3,ch});
                ch++;
            }
        }
        // if(!pq.empty()){
        //     cout << "VALUE : " << pq.top().v << "\n";
        //     cout << "TIME : " << time << "\n";
        // }
        if(o==2){
            int chp=0;
            while(!pq3.empty()&&pq3.top().d<=time){
                    weight=pq3.top().x;
                    value=pq3.top().v;
                    chm=pq3.top().ch;
                    if(mark[chm]==1){
                    pq3.pop();
                }
                else{
                    pq3.pop();
                    pq.push({weight,value,1000100,weight,1,chm});
                    //mark[chm]=1;
                }
            }
            while(!chp){
                if(pq.empty()){
                    cout << "0" << "\n";
                    chp=1;
                }
                else if(pq.top().d<=time){
                    pq.pop();
                }
                else if(pq.top().ch!=0 && mark[pq.top().ch]==1){
                    pq.pop();
                }
                else{
                    chm=pq.top().ch;
                    cout << pq.top().v << "\n";
                    if(pq.top().ch!=0){
                        mark[chm]=1;
                    }
                    pq.pop();
                    chp=1;
                }
            }
        }
        time++;
    }
    
    return 0;
}

/*
5 4
1 1 10 20
1 2 30 10 3
2
2
1 3 40 20 7 5
1 1 30 30
1 2 25 50 7
2
2
*/