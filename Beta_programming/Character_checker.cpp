#include<bits/stdc++.h>
using namespace std;
char a[10100];
int main(){
    int sc=0,bc=0,len,i;
    scanf(" %s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(isupper(a[i])) bc=1;
        else if(islower(a[i])) sc=1;
    }
    if(bc&&sc) printf("Mix");
    else if(sc) printf("All Small Letter");
    else printf("All Capital Letter");

    return 0;
}
