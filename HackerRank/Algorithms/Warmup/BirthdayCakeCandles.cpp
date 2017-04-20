#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin>>n;
	long h[n];
	for(int i=0;i<n;i++) cin>>h[i];

	int count=1;
	
	int g=h[0];
	for(int i=1;i<n;i++) {
		if(h[i]>g) {
			g=h[i];
			count=1;
		} else if(h[i]==g) {
			count++;
		}
	}

	cout<<count<<endl;
	return 0;
}
