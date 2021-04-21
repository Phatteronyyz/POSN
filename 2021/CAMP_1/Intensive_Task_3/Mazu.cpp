#include<bits/stdc++.h>
using namespace std;
stack<char> st;
int main() {
    ios::sync_with_stdio(0);
    int n,i;
    char c;
    int s;
    cin >> n;
    for(i=0;i<n;i++){
        cin >>c;
        if(!st.empty()&&st.top()==c){
            st.pop();
        }
        else st.push(c);
    }
    printf("%d\n",st.size());
    if(st.empty())
        printf("empty\n");
    while(!st.empty()){
        printf("%c",st.top());
        st.pop();
    }
    
    
    return 0;
}