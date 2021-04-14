#include<bits/stdc++.h>
using namespace std;
//int a;
long double power(long double val,int pow){
    if(pow==0){
        return(1.0);
    }
    else 
        return(power(val,pow-1)*val);
}
int main() {
    long double a;
    int b;
    scanf("%llf %d",&a,&b);
    printf("%llf",power(a,b));
    
    return 0;
}