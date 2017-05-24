//https://www.hackerrank.com/challenges/the-hurdle-race

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int h[n];
	int ans=0;
	for(int i=0;i<n;i++) {
		cin>>h[i];
		if(h[i]>k) {
			ans+=h[i]-k;
			k+=h[i]-k;
		}
	}
	cout<<ans<<endl;
	return 0;
}

