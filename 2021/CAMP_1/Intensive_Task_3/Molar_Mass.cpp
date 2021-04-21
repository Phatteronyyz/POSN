#include<bits/stdc++.h>
using namespace std;
stack<int> st;
char c[200];
int main() {
    ios::sync_with_stdio(0);
    int q,i,len,num;
    cin >> q;
    while(q--){
        cin >>c;
        len = strlen(c);
        for(i=0;i<len;i++){

            if(c[i]=='('){
                st.push(-1);
            }
            else if(c[i]=='H'){
                st.push(1);
            }
            else if(c[i]=='C'){
                st.push(12);
            }
            else if(c[i]=='O'){
                st.push(16);
            }
            else if(isdigit(c[i])){
                num = st.top();
                st.pop();
                num *= c[i] - '0';
                st.push(num);
            }
            else if(c[i]==')'){
                num = 0;
                while (st.top()!=-1)
                {
                    num += st.top();
                    st.pop();
                }
                st.pop();
                st.push(num);
            }
        }
        num = 0;
        while (!st.empty())
        {
            num += st.top();
            st.pop();
        }
        printf("%d\n",num);
    }
    return 0;
}

/*
2
COOH
(C(H2O)2)3
*/