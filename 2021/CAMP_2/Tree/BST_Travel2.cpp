#include<bits/stdc++.h>
using namespace std;

int tree[400],l[400],r[400];

void preorder(int i){
    if(tree[i]==0) return;
    cout << tree[i] << " ";
    preorder(l[i]);
    preorder(r[i]);
}
void inorder(int i){
    if(tree[i]==0) return;
    inorder(l[i]);
    cout << tree[i] << " ";
    inorder(r[i]);
}
void postorder(int i){
    if(tree[i]==0) return;
    postorder(l[i]);
    postorder(r[i]);
    cout << tree[i] << " ";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,i,run;
    cin >> n >> tree[1];
    for(i=2;i<=n;i++){
        cin >> tree[i];
        run = 1;
        while(1){
            if(tree[i] < tree[run]){
                if(l[run]==0){
                    l[run] = i;
                    break;
                }
                run = l[run];
            }
            else if(tree[i] > tree[run]){
                if(r[run]==0){
                    r[run] = i;
                    break;
                }
                run = r[run];
            }
        }
    }
    preorder(1);
    cout << "\n";
    postorder(1);
    cout << "\n";
    inorder(1);
    cout << "\n";
    return 0;
}