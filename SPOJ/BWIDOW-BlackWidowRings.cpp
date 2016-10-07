#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {

		long long n;
		cin>>n;
		long long r[n],R[n];

		for(int i=0;i<n;i++) cin>>r[i]>>R[i];

		long long maxr=r[0],rpos=0;
		for(int i=1;i<n;i++) {
			if(maxr<r[i]) {
				maxr=r[i];
				rpos=i;
			}
		}

		bool possible=true;
		for(long long i=0;i<n;i++) {
			if(R[i]>=maxr && i!=rpos) {
				possible=false;
				break;
			}
		}

		if(possible) cout<<rpos+1<<endl;
		else cout<<"-1\n";
	}
	return 0;
}

