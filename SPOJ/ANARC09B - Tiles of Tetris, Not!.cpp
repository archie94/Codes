#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

long long GCD(long long a,long long b) {
	while(b) {
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main() {
	long long w,h;
	cin>>w>>h;
	while(w && h) {
		long long gcd=GCD(w,h);
		long long lcm=w/gcd*h;
		long long ans=(lcm/w)*(lcm/h);
		cout<<ans<<endl;

		cin>>w>>h;
	}
	return 0;
}

