#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	int q;
	cin>>q;

	string h="hackerrank";
	while(q--) {

		string s;
		cin>>s;
		int k=0; 
		for(int i=0;i<s.length();i++) {
			if(s[i]==h[k]) k++;
		}
		if(k==10) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

