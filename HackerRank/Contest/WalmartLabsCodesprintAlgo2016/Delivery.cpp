#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> g[100001];

int lca(int current, int food_node) {
	vector<int> path_current;
	vector<int> path_food_node;

	int start=1;
	int row=0;
	path_current.push_back(start);


}

int main() {
	int n,m,q;
	cin>>n>>m>>q;
	int food[m+1][11];
	for(int i=1;i<=m;i++) {
		cin>>food[i][0];
		for(int j=1;j<=food[i][0];j++) cin>>food[i][j];
	}

	int child=n;
	while(child>=1) {
		int parent=child/2;
		g[parent].push_back(child);
		child--;
	}

	int time=0;
	int current=1;

	
	for(int i=0;i<q;i++) {
		int f,p;
		cin>>f>>p;
		
		int anc=lca(current, food[f][1]);
		for(int j=2;j<=food[f][0];j++) {
			int nanc=lca(current, food[f][i]);
			anc=findMinTime(p, anc, nanc);
		}

		time+=findTime(current, anc);
		time+=findTime(anc, p);
	}
	
	/*
	for(int i=1;i<=n;i++) {
		for(int j=0;j<g[i].size();j++) {
			cout<<g[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	cout<<time<<endl;
	return 0;
}
