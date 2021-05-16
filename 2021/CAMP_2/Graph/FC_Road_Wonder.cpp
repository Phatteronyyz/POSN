#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3+10;
struct Node {int u,v,w;} a[mxN];
int d[mxN], tmp[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,k,t,s;
	cin >> n >> m >> k>> t;
	for(int i=0; i<m; ++i)
		cin >> a[i].u >> a[i].v >> a[i].w;
	for(int i=0; i<k; ++i)
		cin >> a[i+m].u >> a[i+m].v >> a[i+m].w, a[i+m].w*=-1;
	while(t--) {
		cin >> s;
		memset(d, 0x3f, sizeof(d));
		d[s]=0;
		for(int i=0; i<n-1; ++i) {
			for(int j=0; j<k+m; ++j) {
				if(d[a[j].u]<1e9 && d[a[j].u]+a[j].w<d[a[j].v])
					d[a[j].v]=d[a[j].u]+a[j].w;
			}
		}
		memcpy(tmp, d, sizeof(d));
		for(int j=0; j<m+k; ++j)
			if(d[a[j].u]<1e9 && d[a[j].u]+a[j].w<d[a[j].v])
				d[a[j].v]=d[a[j].u]+a[j].w;
		for(int i=1; i<=n; ++i) {
			if(d[i]!=tmp[i] || d[i]>1e9)
				cout << -1 << " ";
			else cout << d[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}