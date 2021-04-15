#include<bits/stdc++.h>
using namespace std;
char a[100],b[100];
int main() {
    int i,j,k,len,ch=0,sum=0,q,won,sumse=0,sumel=0,sumnn=0,summ=0;
    scanf("%d",&q);
    while(q--){
        int chk=0;
        sum=0;
        sumse=0;
        sumnn=0;
        sumel=0;
        scanf(" %s",a);
        len=strlen(a);

//Check 7 3
        for(i=len-1,ch=0,k=0 ; i>=0 ; i--,ch++){
            if(ch%3==0) sum+=a[i]-'0';
            else if(ch%3==1) sum+=(a[i]-'0')*10;
            else if(ch%3==2) sum+=(a[i]-'0')*100;
            if(ch%3==2||i==0){
                if(k%2==0){
                    sumse+=sum;
                }
                if(k%2==1){
                    sumse-=sum;
                }
                sum=0;
                k++; 
            } 
        }
        if(sumse%7==0) printf("7 * %d\n",sumse/7),chk=1;

//Check 11 1
        for(i=len-1,ch=0 ; i>=0 ; i--,ch++){
            if(ch%2==0) sumel+=a[i]-'0';
            else if(ch%2==1) sumel-=a[i]-'0';
        }
        if(sumel%11==0) printf("11 * %d\n",sumel/11),chk=1;

//Check 99 2
        for(i=len-1,ch=0 ; i>=0 ; i--,ch++){
            if(ch%2==0) summ+=a[i]-'0';
            else if(ch%2==1) summ+=(a[i]-'0')*10;
            if(ch%2==1||i==0){
                sumnn+=summ;
                summ=0;
            } 
        }
        if(sumnn%99==0) printf("99 * %d",sumnn/99),chk=1;

//mai kao
    if(!chk) printf("%s\n",a);
    }
    
    return 0;
}

/*
1
1668266767874

1
2374310351037933
*/