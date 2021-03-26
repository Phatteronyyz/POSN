#include<bits/stdc++.h>
using namespace std;
int main(){
    double x1,x2,x3,y1,y2,y3,k,a,pi;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&k);
    double r1,r2,r3,s,ak;
    pi=acos(-1);
    r1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    r2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    r3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    s=(r1+r2+r3)/2;
    a=sqrt(s*(s-r1)*(s-r2)*(s-r3));
    ak=((r1+r2+r3)*k)+(pi*k*k);
    printf("%.2lf\n",a);
    printf("%.2lf",ak);



    return 0;
}
