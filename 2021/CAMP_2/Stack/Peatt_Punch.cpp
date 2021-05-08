#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
stack<PII> st;
int a[100100];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int l,q,i,h,power;
    cin >> l >> q;
    for(i=0;i<l;i++){
        cin >> h;
        while(!st.empty()&&st.top().first>=h) st.pop();
        if(st.empty()) power=0;
        else power=max(st.top().second, h-st.top().first);
        a[i]=power;
        st.push(make_pair(h,power));
    }
    sort(a,a+l);
    while(q--){
        cin >> h;
        cout << l-(upper_bound(a,a+l,h)-a) << "\n";
    }
    
    return 0;
}