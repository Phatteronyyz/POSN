#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int i=3,j=5,*p=&i,*q=&j,*r;
    double x = 2.5 , *y = &x;

    printf("%p\n",&a);
    p = &a;
    printf("%p\n",p);
    printf("%f\n",*p);
    *p = 10;
    printf("%d",a);
    
    return 0;
}