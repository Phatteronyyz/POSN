#include<bits/stdc++.h>
using namespace std;
int a[1000][1000],c[1000010];
int main()
{
    int n,m,sum=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n+n+1;i++)
    {
        if(i%2==1)
            for(int j=1;j<=n;j++) scanf("%d",&a[i][j]);
        else
            for(int j=1;j<=n+1;j++) scanf("%d",&a[i][j]);
    }
    int idex=0;
    for(int i=1;i<=n+n+1;i++)
    {
        if(i%2==1) continue;
        for(int j=1;j<=n;j++)
        {
            c[idex++]=(3*(a[i-1][j]-a[i+1][j]))+(5*(a[i][j]-a[i][j+1]));
            //printf("%d %d %d %d\n",a[i-1][j],a[i+1][j],a[i][j],a[i][j+1]);
        }
    }
    sort(c,c+idex);
    for(int i=0;i<m;i++) sum+=c[i];
    printf("%d\n",sum);
    return 0;
}