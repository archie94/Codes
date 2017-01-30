#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>

#define sz 112345

using namespace std;

int n,m;
int incoming_edge_count[sz];
bool visited[sz];
vector<int> graph[sz], reverse_graph[sz];
vector<int> to_install;
vector<int> sorted_order;
set<int> s;

void init() {
	memset(visited, false, sizeof(visited));
	memset(incoming_edge_count, 0, sizeof(incoming_edge_count));
	s.clear();
	sorted_order.clear();
	to_install.clear();
	for(int i=0;i<sz;i++) {
		graph[i].clear();
		reverse_graph[i].clear();
	}
}

// insert the dependencies we need to install for program "node" 
void find_all_dependencies(int node) {
	if(visited[node]) return;
	s.insert(node); // insert all programs we need to install in a set.
	visited[node] = true;
	for(int i=0;i<graph[node].size();i++) {
		find_all_dependencies(graph[node][i]);
	}
}

// find all the programs which we need to install
void find_all_programs_to_install() {
	for(int i=0;i<to_install.size();i++) {
		find_all_dependencies(to_install[i]);
	}
}

void topo_sort() {
	set<int> s;
	for(int i=1;i<=n;i++) {
		if(incoming_edge_count[i]==0) s.insert(i); // programs which have no dependencies
	}

	while(!s.empty()) {
		int node = *s.begin();
		sorted_order.push_back(node); // push the programs which have least dependencies first
		s.erase(node);
		for(int i=0;i<reverse_graph[node].size();i++) { // if we are including the program which have least dependency, we can now include the programs which depend on these
			incoming_edge_count[reverse_graph[node][i]]--; 
			if(incoming_edge_count[reverse_graph[node][i]]==0) {
				s.insert(reverse_graph[node][i]);
			}
		}
	}
}

int main() {
	int q;
	cin>>q;
	while(q--) {
		init();
		cin>>n>>m;

		for(int i=1;i<=n;i++) {
			int programs;
			cin>>programs;
			for(int j=0;j<programs;j++) {
				int dependencies;
				cin>>dependencies;
				graph[i].push_back(dependencies); // dependencies of the ith node
				reverse_graph[dependencies].push_back(i); // programs which depend on "dependencies"
				incoming_edge_count[i]++;
			}
		}

		for(int i=0;i<m;i++) {
			int program;
			cin>>program;
			to_install.push_back(program);
		}

		find_all_programs_to_install();
		topo_sort();
		vector<int> ans;
		// we have sorted list of programs starting from the ones which have least dependencies
		// we include the one which is in our set and have the least dependencies first in our ans
		// doing this we have lexicographically smallest sequence
		for(int i=0;i<sorted_order.size();i++) {
			if(s.find(sorted_order[i])!=s.end()) {
				ans.push_back(sorted_order[i]);
			}
		}

		cout<<ans.size()<<endl;
		for(int i=0;i<ans.size();i++) {
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
