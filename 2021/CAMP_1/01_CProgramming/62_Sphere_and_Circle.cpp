#include<bits/stdc++.h>
using namespace std;

int main() {
    double r,pi;
    scanf("%lf",&r);
    pi=acos(-1);
    printf("%.3lf\n",4*pi*r*r);
    printf("%.3lf\n",(4.0/3)*pi*r*r*r);
    printf("%.3lf\n",pi*r*r);
    printf("%.3lf",2*pi*r);
    
    return 0;
}