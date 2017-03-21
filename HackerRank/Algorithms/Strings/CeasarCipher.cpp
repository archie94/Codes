#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	int n,k;
	cin>>n;
	string s;
	cin>>s;
	cin>>k;
	k=k%26;

	for(int i=0;i<n;i++) {
		if( s[i]>=65 && s[i]<=90 ) {
			char c = 65 + (s[i] - 65 + k)%26;
			cout<<c;
		} else if( s[i] >= 97 && s[i] <= 122 ) {
			char c = 97 + (s[i] - 97 + k)%26;
			cout<<c;
		} else {
			cout<<s[i];
		}
	}
	cout<<endl;
	return 0;
}

