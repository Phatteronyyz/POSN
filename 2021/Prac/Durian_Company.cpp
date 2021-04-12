#include<bits/stdc++.h>
using namespace std;
int t[1001000];
int main() {
    int h,r;
    scanf("%d %d", &h, &r);
    printf("%d %d", (h-1+(r>=45)+24)%24,(r-45+60)%60);
    return 0;
}