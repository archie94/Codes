#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <limits.h>

using namespace std;

int main() {
	long n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	sort(a,a+n);
	long diff=LONG_MAX;
	for(int i=0;i<n-1;i++) {
		if(a[i+1]-a[i]<diff) {
			diff=a[i+1]-a[i];
		}
	}

	for(int i=0;i<n-1;i++) {
		if(a[i+1]-a[i]==diff) {
			cout<<a[i]<<" "<<a[i+1]<<" ";
		}
	}
	cout<<endl;
	return 0;
}

