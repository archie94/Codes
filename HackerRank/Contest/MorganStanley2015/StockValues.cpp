#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm> 
#include <vector>

using namespace std;

int p[100];
int res=0;
int n;

void solve(vector<int> arr,int i) {
	if(i==n) {
		int s=0;
		for(int i=0;i<n/2;i++) {
			s += abs(arr[i]-arr[n-i-1]);
		}
		// among all 2^(n-2) possibilities pick the minimum all
		if(res<s) {
			res=s;
		}
	} else {
		// leave the first an last element 
		if(i==0) {
			arr.push_back(p[i]);
			solve(arr,i+1);
		} else if(i==n-1) {
			arr.push_back(p[i]);
			solve(arr,i+1);
		} else {
			// first push the element as it is 
			arr.push_back(p[i]);
			solve(arr,i+1);
			arr.pop_back();

			// then try modifying the element and push 
			if( !(arr[i-1]&1) && !(p[i+1]&1) ) {
				int e= arr[i-1]+p[i+1];
				e/=2;

				arr.push_back(e);
				solve(arr,i+1);
			}
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n;
		for(int i=0;i<n;i++) cin>>p[i];

		vector<int> arr;

		res=0;
		solve(arr,0);

		cout<<res<<endl;
	}
	return 0;
}

