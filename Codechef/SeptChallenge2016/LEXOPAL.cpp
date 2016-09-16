#include <iostream>
#include <cstring>
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
		int l=s.size();
		bool f=true;
		for(int i=0;i<=l/2;i++) {
			if(s[i]=='.' && s[l-1-i]=='.') {
				s[i]='a';
				s[l-1-i]='a';
			} else if(s[i]=='.') {
				s[i]=s[l-i-1];
			} else if(s[l-i-1]=='.') {
				s[l-i-1]=s[i];
			} else if(s[i]!=s[l-i-1]) {
				f=false;
				break;
			}
		}
		if(f) {
			cout<<s<<endl;
		} else {
			cout<<-1<<endl;
		}
	}
	return 0;
}

