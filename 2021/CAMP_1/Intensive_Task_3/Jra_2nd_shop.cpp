#include<bits/stdc++.h>
using namespace std;
vector<int> g[10], ans ;
int a[200], b[200] ;
void dfs(int u, int state) {
    if (u==2&&a[2]) {
        int num=0, i ;
        for (i=0;i<state;i++) {
            num *= 10; num+=b[i] ;
        }
        ans.push_back(num) ;
        return ;
    }
    if (a[u]) return ;
    a[u] = 1;
    b[state] = u;
    for (auto x:g[u])
        dfs(x,state+1) ;
    a[u] = 0;
}
int main () {

    int n, i, j;
    scanf ("%d", &n) ;
    while(n--) {
        scanf ("%d %d", &i, &j);
        g[i].push_back(j), g[j].push_back(i) ;
    }
    dfs(2,0) ;
    sort(ans.begin(), ans.end()) ;
    for (auto x:ans)
        printf ("%d2\n",x) ;

   return 0 ;
}