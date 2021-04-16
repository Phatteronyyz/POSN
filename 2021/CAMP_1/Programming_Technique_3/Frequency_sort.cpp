#include<bits/stdc++.h>
using namespace std;
map <int,int> mp;
int main() {
    int n,c,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        mp[a]++;
    }
    sort(mp);
    for(int i=0;<mp[i];i++){
        printf("");
    }
    
    return 0;
}