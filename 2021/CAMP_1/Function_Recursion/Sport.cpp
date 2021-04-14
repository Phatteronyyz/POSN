#include<bits/stdc++.h>
using namespace std;
int k,w,l,a[10000000];
void sport(int w,int l,int st){
    if(w==k||l==k){
        for(int i=0;i<st;i++){
            if(a[i]==1) printf("W ");
            else printf("L ");
        }
        printf("\n");
        return ;
    }
    a[st]=1;
    sport(w+1,l,st+1);
    a[st]=2;
    sport(w,l+1,st+1);
}
int main() {
    scanf("%d %d %d",&k,&w,&l);
    sport(w,l,0);
    
    return 0;
}