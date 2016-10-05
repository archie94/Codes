#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>

#define MOD 1000000007

using namespace std;

long long  getMul(string s,int pos) {
	if(pos==0) {
		if(s[pos]==s[pos+1]) return 1;
		return 2;
	} else if(pos==s.size()-1) {
		if(s[pos]==s[pos-1]) return 1;
		return 2;
	} else {
		if(s[pos]==s[pos+1] && s[pos]==s[pos-1]) return 1;
		else if(s[pos]==s[pos+1] || s[pos]==s[pos-1] || s[pos-1]==s[pos+1]) return 2;
		else return 3;
	}
}

int main() {
	int tt;
	cin>>tt;
	getchar();
	for(int t=1;t<=tt;t++) {
		string s;
		cin>>s;

		if(s.size()<=1) {
			cout<<"Case #"<<t<<": 1"<<endl;
			continue;
		}

		long long count=1;
		for(int i=0;i<s.size();i++) {
			long long mul=getMul(s,i);
			//cout<<mul<<endl;
			count = (count%MOD*mul%MOD)%MOD;
		}

		cout<<"Case #"<<t<<": "<<count<<endl;
	}
	return 0;
}

