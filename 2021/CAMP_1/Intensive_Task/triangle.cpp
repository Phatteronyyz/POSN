#include<bits/stdc++.h>
using namespace std;
int a[101000];
int main() {
    ios::sync_with_stdio(0);
    int n,i,ch=0;
    cin >> n;
    if(n<3){
        printf("no");
        return 0;
    } 
    for(i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    if(a[0]+a[1]>a[n-1]) ch=1;
    printf((ch)?"no":"yes");


    
    return 0;
}