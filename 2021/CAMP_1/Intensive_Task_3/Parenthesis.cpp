#include<bits/stdc++.h>
using namespace std;
char c[200];
int main() {
    ios::sync_with_stdio(0);
    int q,len,i;
    stack<char> sk;
    cin >> q;
    while (q--)
    {
        cin >> c;
        len=strlen(c);
        for(i=0;i<len;i++){
            if(sk.empty()&&(c[i]==')'||c[i]==']')){
                sk.push(c[i]);
                continue;
            }

            if(c[i]=='('){
                sk.push(c[i]);
                continue;
            }
            else if(c[i]==')'&&!sk.empty() && sk.top()=='('  ){
                sk.pop();
                continue;
            }

            if(c[i]=='['){
                sk.push(c[i]);
                continue;
            }
            else if(c[i]==']' && !sk.empty() && sk.top()=='['  ){
                sk.pop();
                continue;
            }
            else sk.push(c[i]);
            
        }

        if(sk.empty()) printf("Yes\n");
        else printf("No\n");

        memset(c,0,sizeof c);
        while (!sk.empty())
        {
            sk.pop();
        }
    
    }
    
    
    
    
    return 0;
}

/*
3
([])
(([()])))
([()[]()])()
*/