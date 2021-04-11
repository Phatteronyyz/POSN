#include<bits/stdc++.h>
using namespace std;
char a[200];
int main() {

    char A[]={'A','B','C'},B[]={'B','A','B','C'},G[]={'C','C','A','A','B','B'};
    int n,ca=0,cb=0,cg=0,mx=-2e9;
    scanf("%d",&n);

    for(int i=0 ; i<n ; i++){
        scanf(" %c",&a[i]);
    }
    for(int i=0 ; i<n ; i++){
        int aa=i%3,bb=i%4,gg=i%6;
        if(a[i]==A[aa]) ca+=1;
        if(a[i]==B[bb]) cb+=1;
        if(a[i]==G[gg]) cg+=1;
    }
    
    mx=max(mx,ca);
    mx=max(mx,cb);
    mx=max(mx,cg);

    printf("%d\n",mx);
    if(mx==ca) printf("Adrian\n");
    if(mx==cb) printf("Bruno\n");
    if(mx==cg) printf("Goran\n");

    return 0;
}