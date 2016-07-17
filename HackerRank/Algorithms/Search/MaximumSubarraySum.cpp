#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
	long long n,m,q,i,j,k;

	cin>>q;
	while(q--) {
		cin>>n>>m;
		pair<unsigned long long,long long> a[n];
		for(i=0;i<n;i++) {
			cin>>a[i].first;
			a[i].second=i+1;
		}

		// modular op will not be negative here 
		a[0].first = a[0].first%m;
		unsigned long long maxx = a[0].first;
		for(i=1;i<n;i++) {
			a[i].first=(a[i].first%m + a[i-1].first%m)%m;
			if(a[i].first>maxx) {
				maxx=a[i].first;
			}
		}

		sort(a,a+n);
		unsigned long long minn = ULONG_MAX;
		for(i=0;i<n-1;i++) {
			if(a[i].second>a[i+1].second) {
				if(a[i+1].first-a[i].first<minn) {
					minn=a[i+1].first-a[i].first;
				}
			}
		}
		cout<<max(maxx,m-minn)<<endl;
	}
	return 0;
}

