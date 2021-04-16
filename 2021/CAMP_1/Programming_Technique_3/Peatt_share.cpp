#include<bits/stdc++.h>
using namespace std;
int a[100100],ch;
int main() {
    ios::sync_with_stdio(0);
    int n,q,i;
    cin >> q;
    while (q--)
    {
        ch = 0;
        cin >> n;
        for(i=1;i<=n;i++){
            cin >> a[i];
            a[i] += a[i-1];
        } 
        for(i=1;i<=n;i++){
            if(a[i]*2==a[n]) {printf("%d\n",i); ch=1; break;}
        }
        for(i=1;i<=n&&ch==0;i++){
            int x=a[n]/2+a[i];
            int j=lower_bound(a,a+n,x)-a;
            if(a[j]==x) {printf("%d %d\n",i,j); ch=1; break;}
        }
        if(!ch) printf("NO\n");

    }
    

    return 0;
}
/*
3
8
3 1 2 1 1 2 1 1
8
2 1 3 1 5 4 1 5
8
10 20 3 40 5 7 15 2
*/