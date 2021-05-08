#include<bits/stdc++.h>
using namespace std;

priority_queue <int, vector<int> > pq1;
priority_queue <int, vector<int> , greater<int>> pq2;

int a;

int main() {
    //ios::sync_with_stdio(0); cin.tie(0);
    int n,i,sz1,sz2,last;
    double ans,x;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        scanf("%d",&a);

        if(i==1) pq1.push(a);
        else if(a<pq1.top()){
            if(abs((pq1.size())-(pq2.size()+1))<=1){
                x=pq1.top();
                pq2.push(x);
                pq1.pop();
                pq1.push(a);
            }
            else pq1.push(a);
        }
        else if(a>=pq1.top()){
            if(!pq2.empty() && a>pq2.top()){
                if(abs((pq1.size()+1)-pq2.size())<=1){
                   x=pq2.top();
                    pq2.pop();
                    pq2.push(a);
                    pq1.push(x); 
                }
                else pq2.push(a);
            }
            else if(!pq2.empty() && a<pq2.top()){
                if(abs((pq1.size()+1)-pq2.size())<=1){
                    pq1.push(a);
                }
                else pq2.push(a);
            }
            else pq2.push(a);
        }
        
        sz1=pq1.size();  sz2=pq2.size();
        if((sz1+sz2)%2!=0){
            if(sz1>sz2) ans=(double)pq1.top();
            else if(sz1<sz2) ans=(double)pq2.top();
        }
        else ans=(double)(pq1.top()+pq2.top())/2;
        printf("%.1lf\n",ans);
        
    }

    return 0;
}

/*
10
1 4 2 5 2 3 1 6 3 4
*/