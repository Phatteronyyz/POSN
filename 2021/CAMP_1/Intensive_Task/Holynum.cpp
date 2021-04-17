#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    int a,k,p;
    cin >> a >> k;
    p = round(a/pow(10,k));
    printf("%.0lf\n",p*pow(10,k));
    
    return 0;
}