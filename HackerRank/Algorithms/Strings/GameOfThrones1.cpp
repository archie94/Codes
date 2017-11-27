#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	string s;
	cin>>s;

	int a[26]={0};

	for (int i=0;i<s.length();i++) {
		a[s[i]-'a']++;
	}

	int c=0;
	for (int i=0;i<26;i++) {
		if (a[i]%2==1) c++;
	}
	if (c>1) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;

	return 0;
}

