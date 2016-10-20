#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		if(((k-1)|k) <= n) cout<<k-1<<endl;
		else cout<<k-2<<endl;
	}
	return 0;
}

