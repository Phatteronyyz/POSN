#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector<vector<int>> b;
int main() {
    ios::sync_with_stdio(0);
    int n,k,i,j,num;
    cin >> n >> k;
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            cin >> num;
            a.push_back(num);
        }
        b.push_back(a);
        a.clear();
    }
    sort(b.begin(),b.end());
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}