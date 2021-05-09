#include<bits/stdc++.h>
using namespace std;
int p[100100],a[100100];
int fin(int i){
    if(p[i]==i) return i;
    return p[i]=fin(p[i]); 
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m,i,x,y,px,py;
    
    cin >> n >> m;
    for(i=1;i<=n;i++) p[i]=i;
    for(i=1;i<=n;i++) cin >> a[i];
    while(m--){
        cin >> x >> y;
        px=fin(x);
        py=fin(y);
        if(px==py) cout << "-1";
        else if(a[px]>a[py]){
            cout << px;
            p[py]=px;
            a[px]+=(a[py]/2);
        }
        else if(a[px]<a[py]){
            cout << py;
            p[px]=py;
            a[py]+=(a[px]/2);
        }
        else if(px<py){
            cout << px;
            p[py]=px;
            a[px]+=(a[py]/2);
        }
        else{
            cout << py;
            p[px]=py;
            a[py]+=(a[px]/2);
        }
    }

    return 0;
}