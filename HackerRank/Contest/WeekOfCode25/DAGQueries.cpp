#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

vector<int> g[100001];
ll a[100001];

void DFS(int s,int val,int *dfn,int type) {
	dfn[s]=1;
	if(type==1) {
		a[s]=val;
	} else if(a[s]>val) {
		a[s]=val;
	}
	for(int i=0;i<g[s].size();i++) {
		int u=g[s][i];
		if(dfn[u]==-1) {
			DFS(u,val,dfn,type);
		}
	}
}

int main() {
	int n,m,q;
	cin>>n>>m>>q;

	for(int i=0;i<m;i++) {
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
	}
	for(int i=1;i<=n;i++) a[i]=0;

	for(int i=0;i<q;i++) {
		int type,u,x;
		cin>>type;
		if(type==3) {
			cin>>u;
		} else {
			cin>>u>>x;
		}

		if(type==1 || type==2) {
			int dfn[n+1];
			for(int i=1;i<=n;i++) dfn[i]=-1;
			dfn[u]=0;
			DFS(u,x,dfn,type);
		} else {
			cout<<a[u]<<endl;
		}
	}
	return 0;
}

