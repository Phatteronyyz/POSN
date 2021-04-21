#include<bits/stdc++.h>
using namespace std;
struct A
{
    int ty , beu , ch , beu2;
    bool operator < (const A& o) const {
        if(beu!=o.beu) return beu > o.beu;
        else if(ty!=o.ty) return ty < o.ty;
        else if(ch!=o.ch) return ch > o.ch;
        else return beu2 > o.beu2;
    }
};
A ch;
int main() {
    ios::sync_with_stdio(0) , cin.tie(0);
    priority_queue <A > pq;
    int d , beu , cha , beu2 , i , chabeu ,chp=0 ,o;
    cin >> d;
    for(i=0;i<d;i++){
        cin >> o;
        if(o==2){
            cin >> beu;
            pq.push({1,beu,100100,0});
        }
        else if(o==1){
            cin >> beu >> cha ;
            pq.push({2,beu,cha,0});
        }
        else if(o==3){
            cin >> beu >> cha >> beu2;
            pq.push({3,beu,cha,beu2});
        }
        else if(o==4){
            chp=0;
            while(!chp){
                if(pq.empty()){
                    cout << "GREAN\n" ;
                    chp=1;
                }
                else if(pq.top().ty==2&&pq.top().ch>i){
                    cout << pq.top().beu << "\n" ;
                    pq.pop();
                    chp=1;
                }
                else if(pq.top().ty==2&&pq.top().ch<=i){
                    pq.pop();
                }
                else if(pq.top().ty==1){
                    cout << pq.top().beu << "\n";
                    chp=1;
                    pq.pop();
                }
                else if(pq.top().ty==3&&pq.top().ch>i){
                    cout << pq.top().beu << "\n";
                    chp=1;
                    pq.pop();
                }
                else if(pq.top().ty==3&&pq.top().ch<=i){
                    ch=pq.top();
                    chabeu = ch.beu2;
                    pq.pop();
                    pq.push({1,chabeu,100100,0});
                }
            }
        }
    }
    
    return 0;
}