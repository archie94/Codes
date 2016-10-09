#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	long long t;
	cin>>t;

	while(t--) {
		getchar();
		getchar();

		long long n;
		cin>>n;
		unsigned long long c;
		unsigned long long sum=0;

		//cout<<"N is "<<n<<endl;
		for(long long i=0;i<n;i++) {
			cin>>c;
			//cout<<"C IS "<<c<<endl;
			sum=(sum+c%n)%n;
		}

		if(sum) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}
	return 0;
}
