#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,ans;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0){
        ans=sqrt(pow(c,2)-pow(b,2));
    }
    else if(b==0){
        ans=sqrt(pow(c,2)-pow(a,2));
    }
    else if(c==0){
        ans=sqrt(pow(b,2)+pow(a,2));
    }
    printf("%.2lf",ans);








    return 0;
}
