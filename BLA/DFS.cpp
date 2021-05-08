#include<bits/stdc++.h>
using namespace std;

char tree[100];
void preorder(int i,int n){
    if(i>n) return;
    cout << tree[i] << " ";
    preorder(2*i,n);
    preorder(2*i+1,n);
}
void inorder(int i,int n){
    if(i>n) return;
    inorder(2*i,n);
    cout << tree[i] << " ";
    inorder(2*i+1,n);
}
void postorder(int i,int n){
    if(i>n) return;
    postorder(2*i,n);
    postorder(2*i+1,n);
    cout << tree[i] << " ";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a,n;
    cin >> n >> a;
    for(int i=1;i<=n;i++){
        cin >> tree[i];
    }
    preorder(a,n);
    cout << "\n";
    inorder(a,n);
    cout << "\n";
    postorder(a,n);
    cout << "\n";

    return 0;
}