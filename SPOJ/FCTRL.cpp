#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
	long t,n;
	cin>>t;

	while(t--) {

		cin>>n;
		
		// find pairs of (2,5) in factorial of n
		
		// no of 2 in factorial of n
		long t = 2;
		long c1 = 0;
		while(n/t > 0) {
			c1 += n/t;
			t *= 2;
		}

		long f = 5;
		long c2 = 0;
		while(n/f > 0) {
			c2 += n/f;
			f *= 5;
		}

		cout<<min(c1,c2)<<endl;
	}
	return 0;
}

