#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    priority_queue<long long, vector<long long>> pq;
    long long d,k,i,n,b,sum=0,j,p;
    cin >> d >> k;
    for(i=0;i<d;i++){
        cin >> n >> b;
        for(j=0;j<n;j++){
            cin >> p;
            p-=(k*i);
            pq.push(p);
        }
        for(j=0;j<b;j++){
            sum+=(pq.top()+(i*k));
            pq.pop();
        }
    }
    cout << sum;
    
    return 0;
}

/*
3 10
5 2
8 4 5 1 10
4 3
14 4 9 14
2 1
20 7
*/