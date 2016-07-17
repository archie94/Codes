#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int val[100001];
bool visited[100001];
vector<vector<int> > g;
int sum[100001];
int n,tot,best;

int dfs(int node) {
	int ret=0;
	visited[node]=true;

	int sz=g[node].size();
	for(int i=0;i<sz;i++) {
		int next=g[node][i];
		if( !visited[next]) {
			ret += dfs(next);
		}
	}

	return sum[node] = val[node] + ret;
}

int main() {
	cin>>n;
	tot=0;
	for(int i=1;i<=n;i++) {
		cin>>val[i];
		tot+=val[i];
	}

	g.resize(n+1);
	for(int i=0;i<n-1;i++) {
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	dfs(1);
	best = INT_MAX;
	for(int i=1;i<=n;i++) {
		if( abs(tot-sum[i]-sum[i]) < best) {
			best = abs(tot-sum[i]-sum[i]);
		}
	}
	cout<<best<<endl;
	return 0;
}

