#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	long long n, hit, t;
	cin>>n>>hit>>t;
	long long h[n];
	for(int i=0;i<n;i++) cin>>h[i];

	sort(h,h+n);
	int k=0;
	for(long long i=1;i<=t;i++) {
		h[k]-=hit;
		if(h[k]<=0) {
			k++;
		}
	}
	cout<<k<<endl;
	return 0;
}
