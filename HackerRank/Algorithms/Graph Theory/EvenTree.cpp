#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int n,m;
	cin>>n>>m;

	vector<int> tree[n+1];
	int count[n+1];
	for(int i=0;i<=n;i++) {
		count[i]=1;
	}

	for(int i=0;i<m;i++) {
		int u,v;
		cin>>u>>v;
		tree[v].push_back(u);
		count[v]=0;
		/*
		   Make count of leaf node as 1 only 
		   For non-leaf node set count as 0
		   Will update count of non-leaf node in bottom up manner
		 */
	}
	
	int c=0,l;

	for(int i=n;i>=0;i--) {
		if(count[i]==0) {// non-leaf node
			for(int j=0;j<tree[i].size();j++) {
				/*
				   do not consider a subtree which has even 
				   number of nodes as we will cut in anyways 
				  */
				if(count[tree[i][j]]%2!=0) {
					c+=count[tree[i][j]];
				}
			}
			count[i]=c+1;
		}
		c=0;
	}

	int t=0;
	for(int i=0;i<=n;i++) {
		if(count[i]%2==0) {
			t++;
		}
	}
	cout<<t-1<<endl;
	return 0;
}
