#include<bits/stdc++.h>
using namespace std;
int main(){
    double q,d,h1,k1,h2,k2,r1,r2,mx,mn;
    int ck;
    scanf("%lf",&q);
    while(q--){
        scanf("%lf %lf %lf %lf %lf %lf",&h1,&k1,&r1,&h2,&k2,&r2);
        d=sqrt(pow(h1-h2,2)+pow(k1-k2,2));
        mx=max(r1,r2);
        mn=min(r1,r2);
        if(d!=0 && mx>d){
            if(d+mn>mx) ck=2;
            else if(d+mn<mx) ck=0;
            else ck=1;
        }
        else{
           if(r1+r2==d) ck=1;
           else if(r1+r2>d) ck=2;
           else ck=0;
        }

        switch(ck){
            case 0: printf("None\n"); break;
            case 1: printf("One\n"); break;
            case 2: printf("More\n"); break;
        }

    }

    return 0;
}

/*
3
0 0 3 0 5 2
0 0 3 0 3 2
0 0 3 -10 -10 3
*/
