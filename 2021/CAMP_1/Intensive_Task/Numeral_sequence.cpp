#include <bits/stdc++.h>
using namespace std;

long long int x,y,sum,n,a,val,val2,a2;
vector <long long int> c;

int main()
{
    x=9;y=1;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&a);
        a2=a;
        sum=0;
        val=0;
        x=9;y=1;
        while(sum+x*y<a)
        {
            sum+=x*y;
            x=x*10;
            y++;
        }
        a-=sum;
        while(x!=0)
        {
            x/=10;
            val+=x;
        }
        val+=(a+y-1)/y;
        val2=val;
        while(val>0)
        {
            c.push_back(val%10);
            val/=10;
        }
        reverse(c.begin(),c.begin()+c.size());
        printf("%lld\n",c[(a2-sum-1)%y]);
        c.clear();
    }
}