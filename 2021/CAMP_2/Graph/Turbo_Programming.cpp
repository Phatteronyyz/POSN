#include<bits/stdc++.h>
using namespace std;
#define T pair<int,int>
const int mxN = 1e5+10;
priority_queue<T, vector<T>, greater<T>> pq;
vector<T> adj[mxN];
int d[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,q;
	cin >> n >> m >> q;
	while(m--) {
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
	}
	memset(d, 0x3f, sizeof(d));
	d[1]=0;
	pq.push({0, 1});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = pq.top().second;
		pq.pop();
		for(auto& v : adj[u]) {
			if(d[v.first]>p.first+v.second) {
				d[v.first]=p.first+v.second;
				pq.push({d[v.first], v.first});
			}
		}
	}
	while(q--) {
		int v;
		cin >> v;
		cout << (d[v]>1e9?-1:d[v]) << "\n";
	}
	return 0;
}