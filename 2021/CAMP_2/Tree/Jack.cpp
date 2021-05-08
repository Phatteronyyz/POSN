#include<bits/stdc++.h>
using namespace std;
int node[100100],l[100100],r[100100];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,i,run;
    cin >> n >> node[1];
    cout << "*\n";
    for(i=2;i<=n;i++){
        cin >> node[i];
        run = 1;
        while(1){
            if(node[i] < node[run]){
                cout << "L";
                if(l[run]==0){
                    l[run]=i; break;
                }
                run=l[run];
            }
            else if(node[i] > node[run]){
                cout << "R";
                if(r[run]==0){
                    r[run]=i; break;
                }
                run=r[run];
            }
        }
        cout << "*\n";
    }
    
    return 0;
}