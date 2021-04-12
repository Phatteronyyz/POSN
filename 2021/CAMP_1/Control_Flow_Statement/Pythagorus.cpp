#include<bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0) printf("%.2lf",sqrt(pow(c,2)-pow(b,2)));
    else if(b==0) printf("%.2lf",sqrt(pow(c,2)-pow(a,2)));
    else if(c==0) printf("%.2lf",sqrt(pow(b,2)+pow(a,2)));
    
    return 0;
}