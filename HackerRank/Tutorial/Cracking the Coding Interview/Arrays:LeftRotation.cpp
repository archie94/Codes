#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long n,d;
	cin>>n>>d;
	long a[n];
	for(long i=0;i<n;i++) cin>>a[i];

	d=d%n;

	for(long i=d;i<n;i++) cout<<a[i]<<" ";
	for(long i=0;i<d;i++) cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}

