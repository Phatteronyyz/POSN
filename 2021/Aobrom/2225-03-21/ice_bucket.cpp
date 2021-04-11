#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,cn=0;
    scanf("%d",&q);
    while(q--){
        cn=0;
        int g,k;
        scanf("%d %d",&g,&k);
        if(g<=100) printf("0");
        else {
            while(g>0){
                if(g-100<=0) break;
                else{
                    g-=10;
                    cn++;
                    g-=(k-1)*100;
                }
            }
            printf("%d",cn);

        }

    }




    return 0;
}

/*
4
60 10
150 1
430 2
320 2
*/
