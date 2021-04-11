#include<bits/stdc++.h>
using namespace std;
int a[20];
int main()
{
    int i,j,sum=0;
    for(i=0;i<9;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sum=sum-100;
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            if(a[i]+a[j]==sum){
                a[i] = -1;
                a[j] = -1;
            }
        }
    }
    for(i=0;i<9;i++){
        if(a[i]>=0){
            printf("%d",a[i]);
            printf("\n");
        }
    }


    return 0;
}

