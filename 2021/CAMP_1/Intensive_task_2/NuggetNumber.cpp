
/*
    TASK: Nugget Number
    LANG: C++
    AUTHOR: Apkmew
    SCHOOL: Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[110];
int main(){
    int i,n,ch=0;
    scanf("%d",&n);
    a[6] = a[9] = a[20] = 1;
    for(i=1;i<=n;i++){
        if(a[i]){
            ch = 1;
            a[i+6] = a[i+9] = a[i+20] = 1;
            printf("%d\n",i);
        } 
    }
    if(!ch) printf("no\n");
    return 0;
}