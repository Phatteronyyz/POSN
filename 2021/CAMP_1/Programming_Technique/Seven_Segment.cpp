#include<bits/stdc++.h>
using namespace std;
char a[5][100];
long long checknangOO_ISUS(long long n,long long sum){
    long long num,cou,j;
    for(j=0,cou=n;cou>0;j+=4,cou--){
        if(a[0][j]==' ' && a[0][j+1]==' ' && a[0][j+2]==' ' &&
           a[1][j]==' ' && a[1][j+1]==' ' && a[1][j+2]=='|' &&
           a[2][j]==' ' && a[2][j+1]==' ' && a[2][j+2]=='|') num = 1;

        if(a[0][j]==' ' && a[0][j+1]=='_' && a[0][j+2]==' ' &&
           a[1][j]==' ' && a[1][j+1]=='_' && a[1][j+2]=='|' &&
           a[2][j]=='|' && a[2][j+1]=='_' && a[2][j+2]==' ') num = 2;

        if(a[0][j]==' ' && a[0][j+1]=='_' && a[0][j+2]==' ' &&
           a[1][j]==' ' && a[1][j+1]=='_' && a[1][j+2]=='|' &&
           a[2][j]==' ' && a[2][j+1]=='_' && a[2][j+2]=='|') num = 3;

        if(a[0][j]==' ' && a[0][j+1]==' ' && a[0][j+2]==' ' &&
           a[1][j]=='|' && a[1][j+1]=='_' && a[1][j+2]=='|' &&
           a[2][j]==' ' && a[2][j+1]==' ' && a[2][j+2]=='|') num = 4;

        if(a[0][j]==' ' && a[0][j+1]=='_' && a[0][j+2]==' ' &&
           a[1][j]=='|' && a[1][j+1]=='_' && a[1][j+2]==' ' &&
           a[2][j]==' ' && a[2][j+1]=='_' && a[2][j+2]=='|') num = 5;

        if(a[0][j]==' ' && a[0][j+1]=='_' && a[0][j+2]==' ' &&
           a[1][j]=='|' && a[1][j+1]=='_' && a[1][j+2]==' ' &&
           a[2][j]=='|' && a[2][j+1]=='_' && a[2][j+2]=='|') num = 6;

        if(a[0][j]==' ' && a[0][j+1]=='_' && a[0][j+2]==' ' &&
           a[1][j]==' ' && a[1][j+1]==' ' && a[1][j+2]=='|' &&
           a[2][j]==' ' && a[2][j+1]==' ' && a[2][j+2]=='|') num = 7;

        if(a[0][j]==' ' && a[0][j+1]=='_' && a[0][j+2]==' ' &&
           a[1][j]=='|' && a[1][j+1]=='_' && a[1][j+2]=='|' &&
           a[2][j]=='|' && a[2][j+1]=='_' && a[2][j+2]=='|') num = 8;

        if(a[0][j]==' ' && a[0][j+1]=='_' && a[0][j+2]==' ' &&
           a[1][j]=='|' && a[1][j+1]=='_' && a[1][j+2]=='|' &&
           a[2][j]==' ' && a[2][j+1]=='_' && a[2][j+2]=='|') num = 9;

        if(a[0][j]==' ' && a[0][j+1]=='_' && a[0][j+2]==' ' &&
           a[1][j]=='|' && a[1][j+1]==' ' && a[1][j+2]=='|' &&
           a[2][j]=='|' && a[2][j+1]=='_' && a[2][j+2]=='|') num = 0;
        sum += num * pow(10,cou-1);
    }
    return sum;
}
int main() {
    long long i,n,m,suma=0,sumb=0;
    gets(a[0]);
    sscanf(a[0],"%lld %lld",&n,&m);
    gets(a[0]);
    gets(a[1]);
    gets(a[2]);
    suma = checknangOO_ISUS(n,0);
    gets(a[0]);
    gets(a[1]);
    gets(a[2]);
    sumb = checknangOO_ISUS(m,0);
    printf("%lld",suma+sumb);
    return 0;
}

/*
4 2

  | |_|   | |_|
  |   |   |   |

|_|   |
  |   |

*/
