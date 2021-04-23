#include<bits/stdc++.h>
using namespace std;
int k;
void sport(int w,int l,int st){
    if(w==k||l==k){
        for(int i=0;i<st;i++){
            if(a[i]==1) printf("W ");
            else printf("L ");
        }
        printf("\n");
        return ;
    }
    a[st]=4;
    sport(w+1,l,st+1);
    a[st]=7;
    sport(w,l+1,st+1);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> k ;
    sport(w,l,0);
    
    return 0;
}