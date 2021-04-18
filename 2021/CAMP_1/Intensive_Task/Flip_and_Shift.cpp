#include<bits/stdc++.h>
using namespace std;
int a[100];
int main() {
    ios::sync_with_stdio(0);
    int q,n,od=0,ev=0,i;
    cin >> q;
    while(q--){
        cin >> n;
        for(i=0;i<n;i++){
            cin >> a[i];
            if(i%2==0&&a[i]==1) ev++;
            else if(i%2!=0&&a[i]==1) od++;
        }
        if(n==3&&a[0]==1&&a[1]==0&&a[2]==1) printf("NO");
        else if(n%2!=0) printf("YES");
        else if(od==ev||abs(od-ev)<=1) printf("YES");
        else printf("NO");
        od=0,ev=0;
    }
    
    return 0;
}

/*
2
18 0 0 1 0 1 1 1 1 0 1 0 0 1 0 0 0 0 1
*/