#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,n,ch=1;
    scanf("%d",&n);
    if(n==1){
        printf("No");
        return 0;
    } 
    else{
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0) ch=0;
        }
    }
    printf((ch==1)?"Yes\n":"No\n");   
    return 0;
}