#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<long long> v;
	long long i,n,m,a,b,k;
	for(i=0;i<10000002;i++) {
		v.push_back(0);
	}
	cin>>n;
	cin>>m;
	for(i=0;i<m;i++) {
		cin>>a;
		cin>>b;
		cin>>k;
		// add sum to only beginning of each interval
		v[a] += k;
		// subtract from the next to end of the interval
		if(b+1 <= n) {
			v[b+1] -= k;
		}
		// in this way we can easily calculate cumulitive of the values in vector 
		// max of these cumilitive value will be our ans
	}
	long long max=v[1];
	long long x= 0;
	for(i=1;i<=n;i++) {
		x = x +v[i];
		max = max<x?x:max;
	}
	cout<<max<<endl;
	return 0;
}

