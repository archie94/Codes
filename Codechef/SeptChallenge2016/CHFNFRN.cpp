#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n,m;
		cin>>n>>m;
		vector<ll> g[n+1];
		for(ll i=0;i<m;i++) {
			ll a,b;
			cin>>a>>b;
			if(a==b) { // ignore self loops
				continue;
			}
			// ignore multiple paths
			if(find(g[a].start(),g[a].end(),b)!=g[a].end()) {
				continue;
			}

			g[a].push_back(b);
			g[b].push_back(a);
		}
		
		for(ll i=1;i<=n;i++) {
			for(ll j=0;j<g[i].size();j++) {
			}
		}


	}
	return 0;
}

