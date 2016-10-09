#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long n;
	cin>>n;
	while(n) {
		long long c[n];
		long long p[n];

		for(long long i=0;i<n;i++) cin>>c[i];
		for(long long i=0;i<n;i++) cin>>p[i];

		sort(c,c+n);
		sort(p,p+n);

		long long cost=0;

		for(long long i=0;i<n;i++) cost+=(p[i]*c[n-i-1]);

		cout<<cost<<endl;
		cin>>n;
	}
	return 0;
}

