#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b-a>=c-b) printf("%d",b-1-a);
    else printf("%d",c-1-b);

    return 0;
}

