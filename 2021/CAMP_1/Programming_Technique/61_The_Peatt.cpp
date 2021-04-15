#include<bits/stdc++.h>
using namespace std;
char a[100],b[100];
int main() {
    int i,j,k,len,ch=0,sum;
    while(q--){
        scanf(" %s",a);
        len=strlen(a);
        for(i=len-1;i>=0;i++){
            if(i%3==1) sum+=a[i];
            else if(i%2=2) sum+=a[i]*10;
            else if(i%3==0) sum+=a[i]*100;
        }
    }
    
    return 0;
}