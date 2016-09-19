#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long q,n;
	cin>>q;
	while(q--) {
		cin>>n;
		if(n&1) {
			cout<<"No"<<endl;
		} else {
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}

