#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin>>n;
	int c[n];
	for(int i=0;i<n;i++) cin>>c[i];

	long long ans=0;
	sort(c,c+n);
	for(int i=n-1;i>=0;i--) {
		ans += (pow(2,n-i-1) * (long long)c[i]);
	}
	cout<<ans;
	return 0;
}
