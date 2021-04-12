#include<bits/stdc++.h>
using namespace std;

int main() {
    double x1,x2,x3,y1,y2,y3,k,d1,d2,d3,s,ans,cir,pi;
    pi=acos(-1);
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&k);   
    d1=pow((pow(x2-x1,2)+pow(y2-y1,2)),1.0/2);
    d2=pow((pow(x3-x1,2)+pow(y3-y1,2)),1.0/2);
    d3=pow((pow(x3-x2,2)+pow(y3-y2,2)),1.0/2);
    s=(d1+d2+d3)/2;
    ans=pow((s*(s-d1)*(s-d2)*(s-d3)),1.0/2);
    cir=(d1*k)+(d2*k)+(d3*k)+(pi*k*k);
    printf("%.2lf\n%.2lf",ans,cir);
    return 0;
}