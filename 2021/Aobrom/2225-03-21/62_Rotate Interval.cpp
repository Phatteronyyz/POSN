#include<bits/stdc++.h>
using namespace std;
char a[11000],b[11000];
int main(){
    int q,len,i;
    scanf("%d",&q);
    while(q--){
        int n,k,z,cn=1,st=0,x;
        scanf(" %s",a);
        len=strlen(a);
        scanf("%d %d",&n,&x);
        k=x%n;
        z=(n-k);
        for(i=0;i<len;i++,cn++){
            b[i]=a[((i+z)%n)+(st*n)];
            if(cn==n) st++,cn=0;
        }
        b[len]='\0';
        printf("%s",b);
    }
    return 0;
}
