#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n,k,q;
	cin>>n>>k>>q;
	k=k%n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	for(int i=0;i<q;i++) {
		int x;
		cin>>x;
		int index;
		index = x - k;
		if(index<0) {
			index = n+index;
		}
		cout<<a[index]<<endl;
	}
	return 0;
}

