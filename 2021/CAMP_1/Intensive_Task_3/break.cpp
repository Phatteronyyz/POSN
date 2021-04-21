#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int>> st;
int main() {
    ios::sync_with_stdio(0);
    int n,s,f,i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> s >> f ;
        if(i==0||s<st.top().first){
            st.push({s,f});
        }
        else{
            while(!st.empty()&&s>st.top().first){
                printf("%d\n",st.top().second);
                st.pop();
            }
            st.push({s,f});
        }
    }
    
    return 0;
}