#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,q=20;
    while(q--){
        scanf("%d %d",&m,&n);
        if((4*n)<m) printf("0\n");
        else if((2*n)>m) printf("0");
        else printf("%d\n",(((4*n)-m)/2)+1);
    }

    return 0;
}
