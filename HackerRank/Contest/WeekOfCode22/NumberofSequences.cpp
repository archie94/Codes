#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define MOD 1000000007

using namespace std;

long long fact(long long n) {
	long long f=1;
	for(long long i=1;i<=n;i++) {
		f=(f*i)%MOD;
	}
	return f;
}

int main() {
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];

	long long c=0;
	long long cc=0;
	for(int i=1;i<=n;i++) {
		if(a[i]==-1) {
			int m=i-1;
			c=(c+m+1)%MOD;
			/*
			for(int j=m;j>=0;j++) { // no of ways to fill up a[i]
				
			}
			*/
		} 
	}

	if(c==0) c=1;
	cout<<c<<endl;
	return 0;
}

