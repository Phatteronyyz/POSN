#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,z;
    scanf("%d",&a);
    z=a%360;
    if(z<0) z=abs(360+z);
    if(z==0||z==180) printf("x-axis");
    else if (z==90||z==270)printf("y-axis");
    else if(z>270) printf("4");
    else if(z>180) printf("3");
    else if(z>90) printf("2");
    else if(z>0) printf("1");




    return 0;
}
