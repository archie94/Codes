#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--) {

		int n;
		long long k;
		cin>>n>>k;

		long long a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];

		sort(a,a+n);
		sort(b,b+n);

		bool flag=true;
		for(int i=0;i<n;i++) {
			if(a[i]+b[n-i-1]<k) {
				flag=false;
				break;
			}
		}

		if(flag) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}


