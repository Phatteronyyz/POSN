#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    priority_queue <int, vector<int>, greater<int> > pq;
    int n,x,i;
    char c;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> c;
        if(c=='A') {
            cin >> x;
            pq.push(x);
        }
        else if(c=='B'){
            if(!pq.empty()){
                printf("%d",pq.top());
                pq.pop();
            }
            else if(pq.empty()){
                printf("-1");
            }
        }
    }
    
    return 0;
}