#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string a;
    stack<char> st;
    int len;

    cin >> a;
    len=strlen(a);
    for(int i=0 ; i < len ; i++){
        if(a[i]=='(') st.push(a[i]);
        else if(st.top()=='(') st.pop();
        else st.push(a[i]);
    }
    cout << st.size();
    
    return 0;
}