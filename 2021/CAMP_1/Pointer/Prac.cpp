#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int a = 5;
    float *p;

    printf("%p\n",&a);
    p = &a;
    printf("%p\n",p);
    printf("%f\n",*p);
    *p = 10;
    printf("%d",a);
    
    return 0;
}