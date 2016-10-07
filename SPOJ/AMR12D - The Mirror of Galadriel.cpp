#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
	int t;
	cin>>t;
	getchar();
	while(t--) {
		string s;
		cin>>s;
		string str=s;
		reverse(str.begin(),str.end());
		if(str==s) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

