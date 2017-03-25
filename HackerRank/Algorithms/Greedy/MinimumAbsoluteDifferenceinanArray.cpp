#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin>>n;
	long a[n];
	long diff;
	for(int i=0;i<n;i++) cin>>a[i];

	sort(a,a+n);

	diff=abs(a[1]-a[0]);
	for(int i=2;i<n;i++) {
		if( abs(a[i]-a[i-1]) < diff ) {
			diff = abs(a[i]-a[i-1]);
		}
	}
	cout<<diff<<endl;
	return 0;
}

