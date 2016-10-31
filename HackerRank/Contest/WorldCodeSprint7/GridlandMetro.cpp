#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
	long long n,m,k;
	long long r,c1,c2;
	long long count=0;

	cin>>n>>m>>k;
	/*
	long long a[n];
	for(long long i=0;i<n;i++) a[i]=0;

	for(long long i=0;i<k;i++) {
		cin>>r>>c1>>c2;
		a[r-1]+=(c2-c1+1);
	}*/

	long long a[n][m];
	for(long long i=0;i<n;i++) {
		for(long long j=0;j<m;j++) {
			a[i][j]=0;
		}
	}

	for(long long i=0;i<k;i++) {
		cin>>r>>c1>>c2;
		for(long long j=c1-1;j<=c2-1;j++) a[r-1][j]=1;
	}

	for(long long i=0;i<n;i++) {
		for(long long j=0;j<m;j++) {
			if(!a[i][j]) count++;
		}
	}

	//for(long long i=0;i<n;i++) count+=m-a[i];
	cout<<count<<endl;
	return 0;
}

