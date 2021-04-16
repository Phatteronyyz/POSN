#include<bits/stdc++.h>
using namespace std;
int a[2000];
int main() {
    int q,n,i,j,pt=0;
    scanf("%d",&q);
    while(q--){
        pt=0;
        int ch=0;
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]==a[i+1]){
                a[i]=-1;
                a[i+1]=-1;
                pt++;
                i++;
            }
        }
        printf("%d\n",pt);
        for(i=0;i<n;i++){
            if(a[i]!=-1) printf("%d ",a[i]),ch=1;;
        }
        if(!ch) printf("Empty\n");

    }
    return 0;
}

/*
2
15
3 5 3 2 3 6 3 4 7 2 4 3 5 3 4
*/