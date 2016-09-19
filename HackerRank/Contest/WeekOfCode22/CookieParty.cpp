#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	long long n,m;

	cin>>n>>m;
	long long r=m%n;
	if(r==0) cout<<0<<endl;
	else cout<<n-r<<endl;
	return 0;
}

