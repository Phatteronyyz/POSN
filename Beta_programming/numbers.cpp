#include<bits/stdc++.h>
using namespace std;
int a[1100];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            printf("%d",a[i]);
            a[i]=-1;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0) printf("%d",a[i]);
    }

    return 0;
}

