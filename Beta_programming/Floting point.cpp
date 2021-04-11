#include<bits/stdc++.h>
using namespace std;
int main (){
	int q;
	scanf("%d",&q);
	while(q--){
		int n;
		long double ans=1;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			ans *= 2;
		}
		printf("%.0Lf\n",ans);
	}
	return 0;
}
