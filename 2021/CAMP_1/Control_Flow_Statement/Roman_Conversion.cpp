#include<bits/stdc++.h>
using namespace std;

int main() {
    int q,a;
    scanf("%d",&q);
    while (q--){
        scanf("%d",&a);
        while(a>0){
            if(a>=1000) printf("M"),a-=1000;
            else if(a>=900) printf("CM"),a-=900;
            else if(a>=500) printf("D"),a-=500;
            else if(a>=400) printf("CD"),a-=400;
            else if(a>=100) printf("C"),a-=100;
            else if(a>=90) printf("XC"),a-=90;
            else if(a>=50) printf("L"),a-=50;
            else if(a>=40) printf("XL"),a-=40;
            else if(a>=10) printf("X"),a-=10;
            else if(a>=9) printf("IX"),a-=9;
            else if(a>=5) printf("V"),a-=5;
            else if(a>=4) printf("IV"),a-=4;
            else if(a>=1) printf("I"),a-=1;
        }
    }
    
    return 0;
}
