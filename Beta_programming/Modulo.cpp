#include<bits/stdc++.h>
using namespace std;
int a[20],b[100];
int main(){
    int i,cn=0,m;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        m=a[i]%42;
        b[m]=1;
    }
    for(i=0;i<42;i++){
        if(b[i]==1) cn++;
    }
    printf("%d",cn);




    return 0;
}
