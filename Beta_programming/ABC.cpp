#include<bits/stdc++.h>
using namespace std;
char a[10];
int b[200];

int main()
{
    int i;
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);

    }
    sort(b,b+3);
    for(i=0;i<3;i++){
        scanf(" %c",&a[i]);
        if(a[i]=='A') printf("%d ",b[0]);
        else if(a[i]=='B') printf("%d ",b[1]);
        else printf("%d ",b[2]);
    }

    return 0;
}

