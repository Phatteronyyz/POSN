#include<bits/stdc++.h>
using namespace std;
int main() {
    int q,ck=0;
    double h1,k1,r1,h2,k2,r2,d,mn,mx;
    scanf("%d",&q);
    while(q--){
        scanf("%lf %lf %lf %lf %lf %lf",&h1,&k1,&r1,&h2,&k2,&r2);
        d=sqrt(pow(h1-h2,2)+pow(k1-k2,2));
        mn=min(r1,r2);
        mx=max(r1,r2);
        if(d!=0 && mx>d){
            if(d+mn==mx) ck=1;
            else if(d+mn>mx) ck=2;
            else ck=0;
        }
        else if(d!=0 && mx<d){
            if(mn+mx<d) ck=0;
            else if(r1+r2==d) ck=1;
            else if(r1+r2>d) ck=2;
        }
        else if(d==0){
            if(r1==r2) ck=2;
            else ck=0;
        }
        else if(mx==d) ck=2;
        switch(ck){
            case 0: printf("None\n"); break;
            case 1: printf("One\n"); break;
            case 2: printf("More\n"); break;
        }

    } 
    
    return 0;
}