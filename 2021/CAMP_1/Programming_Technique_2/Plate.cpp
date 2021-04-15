#include<bits/stdc++.h>
using namespace std;
int room[1100],Q[100000][2];
int main() {
    int nc,ns,c,s,i,j,now,nowroom,sz=0,ch,num;
    char a;
    scanf("%d %d",&nc,&ns);
    for(i=0;i<ns;i++){
        scanf("%d %d",&c,&s);
        room[s]=c;
    }
    while (1)
    {
        scanf(" %c",&a);
        if(a=='X') break;
        if(a=='E'){
            scanf("%d",&num);
            nowroom=room[num];
            for(i=sz-1,ch=1;i>=0;i--){
                if(Q[i][1]==nowroom){
                    ch=0;
                    for(j=sz-1;j>i;j--)
                        Q[j+1][0]=Q[j][0],Q[j+1][1]=Q[j][1];
                    Q[i+1][0]=num, Q[i+1][1]=nowroom;
                    break;
                }
            }
            if(ch)
                Q[sz][0]=num,Q[sz][1]=nowroom;
            sz++;
        }
        else{
            if(sz==0) printf("empty\n");
            else{
                printf("%d\n",Q[0][0]);
                for(i=0;i<sz;i++)
                    Q[i][0]=Q[i+1][0],Q[i][1]=Q[i+1][1];
                sz--;
            }
        }
    }
    printf("0\n");
    
    
    return 0;
}

/*
2 6
1 41
1 42
1 43
2 201
2 202
2 203
E 41
E 201
D
E 202
E 42
E 43
D
E 203
D
D
D
X
*/