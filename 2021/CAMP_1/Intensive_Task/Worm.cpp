#include<bits/stdc++.h>
using namespace std;
struct A
{
    int d,c;
    bool operator < (const A& o) const{
        return c < o.c;
    }
};
A a[100100];
int main() {
    ios::sync_with_stdio(0);
    int n,i;
    double sum=0,el=0,mx=0,ans1,ans2;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i].d >> a[i].c;
    sort(a,a+n);
    sum=a[0].d , el = a[0].c , mx=sum/el;
    ans1=sum , ans2=el;
    for(i=1;i<n;i++){
        sum+=a[i].d , el=a[i].c; 
        if(sum/el > mx)
            mx=sum/el , ans1=sum, ans2=el;
    }
    printf("%.0lf %.0lf",ans1,ans2);
    
    return 0;
}