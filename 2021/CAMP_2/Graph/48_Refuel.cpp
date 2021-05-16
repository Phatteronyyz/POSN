#include<bits/stdc++.h>
using namespace std;
#define ar array<int, 2>
#define T pair<int, ar>
const int mxN = 1010;
int d[105][mxN], f[mxN];
priority_queue<T, vector<T>, greater<T>> pq;
vector<pair<int,int>> adj[mxN];
void query() {
	int n,m,c,s,e;
	cin >> n >> m;
	for(int i=0; i<n; ++i)
		cin >> f[i];
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}
	cin >> c >> s >> e;
	memset(d, 0x3f, sizeof(d));
	d[0][s]=0;
	pq.push({0, ar{s, 0}});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		if(u[1]+1<=c && d[u[1]+1][u[0]]>p.first+f[u[0]]) {
			d[u[1]+1][u[0]] = p.first+f[u[0]];
			pq.push({d[u[1]+1][u[0]], ar{u[0], u[1]+1}});
		}
		for(auto& x : adj[u[0]]) {
			if(u[1]-x.second>=0 && d[u[1]-x.second][x.first]>p.first) {
				d[u[1]-x.second][x.first]=p.first;
				pq.push({d[u[1]-x.second][x.first], ar{x.first, u[1]-x.second}});
			}
		}
	}
	int ans=1e9;
	for(int i=0; i<=c; ++i)
		ans = min(ans, d[i][e]);
	cout << (ans>=1e9?-99:ans) << "\n";
	for(int i=0; i<n; ++i)
		adj[i].clear();
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}