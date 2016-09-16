#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;
long long g[1001][1001],gc[1001][1001];

bool isBipartite(long long n) {
	long long color[n+1];
	for(long long i=0;i<=n;i++) color[i]=-1;

	color[1]=1;
	
	queue<long long> q;
	q.push(1);

	while(1) {

		while(!q.empty()) {

			long long a = q.front();
			q.pop();

			for(long long b=1;b<=n;b++) {
				if(gc[a][b] && color[b]==-1) {
					color[b] = 1-color[a];
					q.push(b);
				} else if(gc[a][b] && color[a]==color[b]) {
					return false;
				}
			}
		}

		// check for any un connected component
		bool left = false;
		for(long long i=1;i<=n;i++) {
			if(color[i]==-1) {
				color[i]=1;
				q.push(i);
				left=true;
				break;
			}
		}
		if(!left) {
			break;
		}
	}

	return true;
}

int main() {
	int t;
	cin>>t;
	while(t--) {

		long long n,m;
		cin>>n>>m;
		//long long g[n+1][n+1];
		//long long gc[n+1][n+1];
		for(long long i=0;i<=n;i++) {
			for(long long j=0;j<=n;j++) {
				g[i][j]=0;
			}
		}

		for(long long i=0;i<m;i++) {
			long long a,b;
			cin>>a>>b;
			
			if(a==b) continue;

			g[a][b] = 1;
			g[b][a] = 1;
			//g[a][a]=1;
			//g[b][b]=1;
		}
		
		for(long long i=1;i<=n;i++) {
			for(long long j=1;j<=n;j++) {
				if(i==j) continue;
				if(g[i][j]) {
					gc[i][j]=0;
				} else {
					gc[i][j]=1;
				}
			}
		}

		if(isBipartite(n)) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}


