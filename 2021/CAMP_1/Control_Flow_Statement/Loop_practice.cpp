#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,a;
    scanf("%d",&n);
    a=n;

    for(i=1;i<=n;i++){
        printf("%d ",i);
    }
    printf("\n");

    while (n>=1)
    {
        printf("%d ",n);
        n--;
    }
    printf("\n");

    n=a;
    for(i=2;i<=n;i+=2){
        if(n==1) break;
            printf("%d ",i);
        }
    printf("\n");

    for(i=n;i>=1;i--){
        if(n==1) break;
        if(i%2==0) printf("%d ",i);
    }
    printf("\n");

    if(n==1) printf("1");
    else{
        for(i=1;i<=n;i++){
            if(i%2!=0) printf("%d ",i);
        }
    }
    printf("\n");
    
    if(n==1) printf("1");
    else{
        for(i=n;i>=1;i--){
            if(i%2!=0) printf("%d ",i);
        }
    }
    
    return 0;
}