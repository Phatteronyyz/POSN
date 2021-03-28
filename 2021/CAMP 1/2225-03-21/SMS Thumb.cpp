#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(){
    int n,s,m,i,h,v,g,st;
    scanf("%d",&n);
    scanf("%d %d",&s,&m);
    st=s;
    if(s!=7&&s!=9&&s!=1&&s!=8){
        if(m%3==0) a[0]=((s-2)*3)+67;
        else a[0]=((s-2)*3)+(m%3)+64;
    }
    else{
        if(s==7){
            if(m%4==0) a[0]=(15+4)+64;
            else a[0]=(15+(m%4))+64;
        }
        else if(s==9){
            if(m%4==0) a[0]=(22+4)+64;
            else a[0]=(22+(m%4))+64;
        }
        else if(s==8){
            if(m%3==0) a[0]=(19+3)+64;
            else a[0]=(19+(m%3))+64;
        }
    }

    for(i=1;i<n;i++){
        scanf("%d %d %d",&h,&v,&g);
        st=(st+h)+(v*3);
        if(st!=7&&st!=9&&st!=1&&st!=8){
            if(g%3==0) a[i]=((st-2)*3)+67;
            else a[i]=((st-2)*3)+(g%3)+64;
        }
        else{
            if(st==7){
                if(g%4==0) a[i]=(15+4)+64;
                else a[i]=(15+(g%4))+64;
            }
        else if(st==9){
            if(g%4==0) a[i]=(22+4)+64;
            else a[i]=(22+(g%4))+64;
        }
        else if(st==8){
            if(g%3==0) a[i]=(19+3)+64;
            else a[i]=(19+(g%3))+64;
        }
        }
    }

    for(i=0;i<n;i++){
        printf("%c",a[i]);
    }



    return 0;
}
