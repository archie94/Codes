#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--) {
		long n;
		cin>>n;
		long a[n];
		for(long i=0;i<n;i++) cin>>a[i];

		long sum=0;
		bool failed=false;
		bool master=false;
		for(long i=0;i<n;i++) {
			sum+=a[i];
			if(a[i]==5) {
				master=true;
			}
			if(a[i]<=2) {
				failed=true;
			}
		}

		float avg=0.0;
		avg = (sum*1.0)/n;

		if(!failed && master && avg>=4.0) {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
	return 0;
}


