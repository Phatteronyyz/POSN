#include<bits/stdc++.h>
using namespace std;
char node[300],str[300];
int l[300],r[300];
stack<int> st;

void in(int i){
    if(l[i]){
        cout << "(";
        in(l[i]);
    }
    cout << node[i];
    if(r[i]){
        in(r[i]);
        cout << ")";
    }
}
void pre(int i){
    cout << node[i];
    if(l[i]) pre(l[i]);
    if(r[i]) pre(r[i]);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int i,len,cou=0;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(isalpha(str[i])){
            node[++cou] = str[i];
            st.push(cou);
        }
        else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
            node[++cou] = str[i];
            r[cou] = st.top(); st.pop();
            l[cou] = st.top(); st.pop();
            st.push(cou);
        }
    }
    in(cou); cout << "\n";
    pre(cou); cout << "\n";

    
    return 0;
}