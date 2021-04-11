#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[]={0,0,31,59,90,120,151,181,212,243,273,304,334};
    int i,d,m,date;
    scanf("%d %d",&d,&m);
    date=(p[m]+d+4)%7;
    switch(date) {
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("Wednesday"); break;
        case 5: printf("Thursday"); break;
        case 6: printf("Friday"); break;
        case 0: printf("Saturday"); break;
    }



    return 0;
}

