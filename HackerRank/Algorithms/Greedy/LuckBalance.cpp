#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n,k;
	long long totluck=0;
	cin>>n>>k;
	vector<int> important;
	for(int i=0;i<n;i++) {
		int x,y;
		cin>>x>>y;
		totluck+=x;
		if(y==1) {
			important.push_back(x);
		}
	}

	sort(important.begin(),important.end());

	long long luck=0;
	int numflip=important.size()-k;

	// we want her to lose as much as she can and lose the one with high L
	for(int i=0;i<numflip;i++) {
		luck+=important[i];
	}
	cout<<totluck-2*luck<<endl;
	return 0;
}

