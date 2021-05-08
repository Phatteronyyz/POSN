#include<bits/stdc++.h>
using namespace std;

int tree[1<<23];
char a[10];
void preorder(int i){
    if(tree[i]==0) return;
    cout << tree[i] << "\n";
    preorder(2*i);
    preorder(2*i+1);
}
void inorder(int i){
    if(tree[i]==0) return;
    inorder(2*i);
    cout << tree[i] << "\n";
    inorder(2*i+1);
}
void postorder(int i){
    if(tree[i]==0) return;
    postorder(2*i);
    postorder(2*i+1);
    cout << tree[i] << "\n";
}
void bfs(int i){
    for(i=1;i<(1<<23);i++)
        if(tree[i]) cout << tree[i] << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,num,run,i;
    cin >> a >> n;
    for(i=0;i<n;i++){
        cin >> num;
        run = 1;
        while(tree[run]!=0){
            if(num < tree[run]) run=2*run;
            else run=2*run+1;
        }
        tree[run]=num;
    }
    if(a[1]=='R') preorder(1);
    if(a[1]=='O') postorder(1);
    if(a[1]=='N') inorder(1);
    if(a[1]=='F') bfs(1);

    
    return 0;
}