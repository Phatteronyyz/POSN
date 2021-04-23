#include<bits/stdc++.h>
using namespace std;
map<string , int > mp;
string a;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n,m;
        cin >>n >>m;
        while (m--)
        {
            cin >> a;
            mp[a]=1;
        }
        if(n==mp.size()) cout << "yes" << "\n";
        else cout << "no" << "\n";
        mp.clear();
    }
    
    return 0;
}