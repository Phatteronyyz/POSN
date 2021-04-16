#include<bits/stdc++.h>
using namespace std;
struct A
{
    char word[110];
    bool operator < (const A& o)const{
        if(strcmp(word,o.word)<0) return true;
        else return false;
    }
};
int a[100100];
double b[100100];
char c[100100];
A d[100100];
int main() {
    int t,n,i;
    scanf("%d %d",&t,&n);
    if(t==1){
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n;i++) printf("%d ",a[i]);
        printf("\n");
        for(i=n-1;i>=0;i--) printf("%d ",a[i]);
        printf("\n");
    }
    else if(t==2){
        for(i=0;i<n;i++) scanf("%lf",&b[i]);
        sort(b,b+n);
        for(i=0;i<n;i++) printf("%.0lf ",b[i]);
        printf("\n");
        for(i=n-1;i>=0;i--) printf("%.0lf ",b[i]);
        printf("\n");
    }
    else if(t==3){
        for(i=0;i<n;i++) scanf(" %c",&c[i]);
        sort(c,c+n);
        for(i=0;i<n;i++) printf("%c ",c[i]);
        printf("\n");
        for(i=n-1;i>=0;i--) printf("%c ",c[i]);
        printf("\n");
    }
    else if(t==4){
        for(i=0;i<n;i++) scanf(" %s",d[i].word);
        sort(d,d+n);
        for(i=0;i<n;i++) printf("%s ",d[i].word);
        printf("\n");
        for(i=n-1;i>=0;i--) printf("%s ",d[i].word);
        printf("\n");
    }
    
    return 0;
}