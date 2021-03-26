#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    scanf("%d",&a);
    for(int i=1;i<=a;i++) printf("%d ",i);
    printf("\n");
    for(int i=a;i>0;i--) printf("%d ",i);
    printf("\n");
    for(int i=2;i<=a;i+=2) printf("%d ",i);
    printf("\n");
    if(a%2!=0) b=a-1,c=a;
    else b=a,c=a-1;
    for(int i=b;i>=2;i-=2) printf("%d ",i);
    printf("\n");
    for(int i=1;i<=c;i+=2) printf("%d ",i);
    printf("\n");
    for(int i=c;i>=1;i-=2) printf("%d ",i);


    return 0;
}
