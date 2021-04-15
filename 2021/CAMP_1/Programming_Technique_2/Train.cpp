#include<bits/stdc++.h>
using namespace std;
list <int> l;
list <int>::iterator it;
string a;
int main() {
    int n;
    cin >> n;
    l.push_back(999);
    int num;
    it = l.begin();
    while(n--){
        cin >> a;
        if(a=="call") printf("%d\n",*it);
        else if(a=="head") it=l.begin();
        else if(a=="tail"){
            it=l.end();
            it--;
        }
        else if(a=="next"){
            it++;
            if(it==l.end()) it--;
        }
        else  if(a=="list"){
            for(list<int>::iterator i=it;i!=l.end();i++) printf("%d ",*i);
            printf("\n");
            it=l.end();
            it--;
        }
        else if(a=="remove"){
            it++;
            if(it==l.end()) it--;
            else{
                it=l.erase(it);
                it--;
            }
        }
        else if(a=="add"){
            scanf("%d",&num);
            l.insert(++it,num);
            it--;
            it--;
        }
    }
    
    
    
    
    
    return 0;
}