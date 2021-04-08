#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(){
    int n,s,m,i,h,v,g,st,cnt=1;
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
        else if(st==1){
            cnt-=1;
        }
    }

    for(i=1;i<n;i++){
        scanf("%d %d %d",&h,&v,&g);
        st=(st+h)+(v*3);
        if(st!=7&&st!=9&&st!=1&&st!=8){
            if(g%3==0) a[cnt]=((st-2)*3)+67;
            else a[cnt]=((st-2)*3)+(g%3)+64;
        }
        else{
            if(st==7){
                if(g%4==0) a[cnt]=(15+4)+64;
                else a[cnt]=(15+(g%4))+64;
            }
        else if(st==9){
            if(g%4==0) a[cnt]=(22+4)+64;
            else a[cnt]=(22+(g%4))+64;
        }
        else if(st==8){
            if(g%3==0) a[cnt]=(19+3)+64;
            else a[cnt]=(19+(g%3))+64;
        }
        else if(st==1){
            cnt-=(g+1);
        }
        }
        cnt++;
    }

    if(cnt<=0) printf("null");

    else
    for(i=0;i<cnt;i++){
        printf("%c",a[i]);
    }

    return 0;
}
