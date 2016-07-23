#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	long long n;
	long long sj;
	cin>>n>>sj;
	long long sr[n];

	for(int i=0;i<n;i++) cin>>sr[i];

	bool skip = false;

	long long broke=0;

	for(int i=0;i<n;i++) {
		if(sr[i]<=sj) {
			broke++;
		} else if( sr[i]>sj && !skip){
			skip=true;
		} else if(sr[i]>sj && skip) {
			break;
		}
	}

	cout<<broke<<endl;
	return 0;
}

