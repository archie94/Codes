#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int gcd(int a,int b) {
	if(!b) return a;
	return gcd(b, a%b);
}

int lcm(int *a,int n) {
	int l=a[0];
	for(int i=1;i<n;i++) {
		l = (a[i]*l)/gcd(a[i],l);
	}
	return l;
}

int hcf(int *a, int m) {
	if(m==1) return a[0];
	if(m==2) return gcd(a[0],a[1]);

	int h=m/2;
	return gcd(hcf(&a[h-1], h), hcf(&a[h], m-h));
}

int main() {
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];

	int x1=lcm(a,n);
	int x2=hcf(b,m);
	
	int c=0;
	for(int i=1;(i*x1)<=x2;i++) {
		bool ok=true;
		for(int j=0;j<m;j++) {
			if(b[j]%(i*x1)) {
				ok=false;
				break;
			}
		}
		if(ok) c++;
	}
	cout<<c<<endl;
	return 0;
}

