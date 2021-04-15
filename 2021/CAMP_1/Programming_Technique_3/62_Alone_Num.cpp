#include<bits/stdc++.h>
using namespace std;
int a[200000];
map<int,int> mp;
int main() {
    int q,n,k,j,mx=-2e9,i,ch=0;
    scanf("%d",&q);
    while(q--){
        ch=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            mp[a[i]]++;
        }
        for(i=0;i<n;i++){
            if(mp[a[i]]==1){
                printf("%d ",a[i]);
                ch=1;
            } 
        }
        printf("\n");
        if(ch==0) printf("No Alone Num");
        mp.clear();
    }
    
    return 0;
}

/*
3
9
3 2 1 2 3 7 3 6 8
7
1 3 2 4 2 0 1
6
-1 -2 -3 -3 -2 -1
*/