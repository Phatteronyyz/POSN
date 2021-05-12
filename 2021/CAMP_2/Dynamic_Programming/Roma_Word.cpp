#include<bits/stdc++.h>
using namespace std;

#define sz(a) (int)a.size()
#define pu(b,a) a.push(b)
#define pop(a) a.pop()
#define setdcm(a) fixed << setprecision(a)
#define empty(a) a.empty();
#define mxheap priority_queue<int, vector<int> >
#define mnheap priority_queue<int, vector<int> , greater<int> >
#define nl << "\n"
#define sp << " "
#define loop0(i,a) for(i=0;i<a;i++)
#define loop1(i,a) for(i=1;i<=a;i++)

using ll = long long;

typedef pair<int,int> PII;

char a[2010],b[2010],c[2010];
int dp[2010][2010],path[2010][2010];

void solve(){
    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

    int i,j,lena,lenb,cou=0;
    cin >> (a+1) >> (b+1);
    lena=strlen(a+1),lenb=strlen(b+1);
    for(i=1;i<=lena;i++){
        for(j=1;j<=lenb;j++){
            if(a[i]==b[i])
                dp[i][j]=dp[i-1][j-1]+1,path[i][j]=1;
            else if(dp[i-1][j]>=dp[i][j-1])
                dp[i][j]=dp[i-1][j],path[i][j]=2;
            else
                dp[i][j]=dp[i][j-1],path[i][j]=3;
        }
    }
    cout << dp[lena][lenb] nl;
    if(!dp[lena][lenb]){
        cout << "No Roma word" nl;
        return 0;
    }
    i=lena,j=lenb;
    while(i>0&&j>0){
        if(path[i][j]==1)
            c[cou++]=a[i],i--,j--;
        else if(path[i][j]==2) i--;
        else j--;
    }
    for(i=cou-1;i>=0;i--) cout << c[i];
    cout nl;
    
    return 0;
}