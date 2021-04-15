#include<bits/stdc++.h>
using namespace std;

int main() {
    int q,n,i;
    scanf("%d",&q);
    while (q--)
    {
        scanf("%d",&n);
        for(i=2;i<=sqrt(n);i++){
            while(n%i==0){
                 printf("%d",i);
                 n/=i;
                 if(n!=1) printf(" x ");
            }
            
        }
        if(n!=1) printf("%d",n);
        
    }
    
    
    return 0;
}