#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

	int n;
	cin>>n;
	int c[n];
	for(int i=0;i<n;i++) cin>>c[i];

	sort(c,c+n);

	int count=0;
	for(int i=0;i<n;) {
		if(c[i]==c[i+1]) {
			count++;
			i+=2;
		} else {
			i++;
		}
	}
	cout<<count<<endl;
	return 0;
}

