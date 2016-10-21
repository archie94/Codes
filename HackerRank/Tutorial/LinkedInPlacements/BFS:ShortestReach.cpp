#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		vector<int> g[n+1];
		for(int i=0;i<m;i++) {
			int u,v;
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		int s;
		cin>>s;

		int dist[n+1];
		for(int i=0;i<=n;i++) dist[i]=-1;

		queue<int> q;
		q.push(s);
		dist[s]=0;
		while(!q.empty()) {
			int u,v;
			u=q.front();
			for(int i=0;i<g[u].size();i++) {
				int v=g[u][i];
				if(dist[v]==-1) {
					dist[v]=dist[u]+1;
					q.push(v);
				}
			}
			q.pop();
		}

		for(int i=1;i<=n;i++) {
			if(s==i) continue;
			if(dist[i]==-1) cout<<dist[i]<<" ";
			else cout<<6*dist[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

