#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	long long xt,xd,yt,yd;
	long n;
	cin>>xt>>yt;
	cin>>n;
	for(long i=0;i<n;i++) {
		long long x,y;
		cin>>x>>y;
		xt-=x;
		yt-=y;
	}
	cout<<xt<<" "<<yt<<endl;
	return 0;
}

