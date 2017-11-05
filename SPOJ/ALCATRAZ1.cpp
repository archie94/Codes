#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		string num;
		cin>>num;
		long long ans = 0;
		for(int i=0;i<num.size();i++) {
			ans += num[i] - 48;
		}
		cout<<ans<<endl;
	}
	return 0;
}

