#include<bits/stdc++.h>
using namespace std;
vector <int> a,g[100100];
int in[100100];
priority_queue<int > b;
int main(){
    int q,m,n,r,s;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&m);
        while(m--){
            scanf("%d %d",&r,&s);
            g[r].push_back(s),in[s]++;
        }
        for(int i=1;i<=n;i++){
            if(!in[i]) b.push(-i);
        }
        while(!b.empty()){
            r=b.top()*-1; b.pop();
            a.push_back(r);
            for(auto x:g[r]){
                in[x]--;
                if(in[x]==0) b.push(-x);
            }
        }
        if(a.size()==n){
            printf("Yes ");
            for(auto x:a) printf("%d ",x);
            printf("\n");
        }
        else printf("No\n");
        for(int i=1;i<=n;i++){
            in[i]=0;
            g[i].clear();
        }
        a.clear();

    }


    return 0;
}
