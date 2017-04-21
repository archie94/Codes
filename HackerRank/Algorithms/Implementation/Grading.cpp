#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin>>n;
	int g[n];
	for(int i=0;i<n;i++) cin>>g[i];

	for(int i=0;i<n;i++) {

		if(g[i]<38) {
			cout<<g[i]<<endl;
		} else if(g[i]%5>2) {
			cout<<5*(g[i]/5 + 1)<<endl;
		} else {
			cout<<g[i]<<endl;
		}
	}
	return 0;
}
