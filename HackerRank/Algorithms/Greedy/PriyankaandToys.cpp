#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n;
	cin>>n;
	int w[n];
	for(int i=0;i<n;i++) cin>>w[i];

	sort(w,w+n);

	int last=w[0];
	int count=1;
	for(int i=1;i<n;i++) {
		if(w[i]<=last+4) {
			continue;
		} else {
			last = w[i];
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}

