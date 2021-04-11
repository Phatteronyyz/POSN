#include<bits/stdc++.h>
using namespace std;
char a[1100];
int main()
{
    int q,i,len;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        len = strlen(a);
        if(len==1&&a[len-1]=='2') printf("T\n");
        else if(a[len-1]=='1' || a[len-1]=='3' || a[len-1]=='5' || a[len-1]=='7' || a[len-1]=='9') printf("T\n");
        else printf("F\n");
    }

    return 0;
}

