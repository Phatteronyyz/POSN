#include<bits/stdc++.h>
using namespace std;
struct A
{
    string b;
    bool operator < (const A& o) const{
        if(b+o.b < o.b+b) return true;
        else return false;
    }
};
A b[100100];
int main() {
    ios::sync_with_stdio(0);
    int n,cc=0,cb=0,i,len;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> b[i].b;
    }
    sort(b,b+n);
    for(i=0;i<n;i++){
        cout << b[i].b;
    }
    return 0;
}