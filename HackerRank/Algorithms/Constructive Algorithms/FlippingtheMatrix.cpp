#include <iostream>
#include <cstdio>
#include <algorithm>

#define max(a,b) (a>b?a:b)

using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--) {
		int n;
		cin>>n;
		n*=2;
		int a[n][n];
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				cin>>a[i][j];
			}
		}

		long long sum=0;

		// For every element we have only 4 possible values.
		// We can shuffle as many times to get the best of each location
		for(int i=0;i<n/2;i++) {
			for(int j=0;j<n/2;j++) {
				long s;
				s=max(a[i][j],a[i][n-j-1]);
				s=max(s,a[n-1-i][j]);
				s=max(s,a[n-1-i][n-1-j]);
				sum+=s;
			}
		}

		cout<<sum<<endl;
	}
	return 0;
}

