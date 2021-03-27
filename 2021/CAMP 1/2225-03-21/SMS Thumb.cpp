#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(){
    int n,s,m;
    scanf("%d",&n);
    scanf("%d %d",&s,&m);
    printf("%c",((s-2)*3)+(m%3)+2+64);


    return 0;
}
