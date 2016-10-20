#include <iostream>
#include <string>

using namespace std;

int main() {
	long n;
	cin>>n;

	long long l=0;
	long long max_l=0;
	while(n>0) {
		if(n%2) {
			l++;
			if(max_l<l) max_l=l;
		} else {
			l=0;
		}
		n/=2;
	}
	cout<<max_l<<endl;

	return 0;
}

