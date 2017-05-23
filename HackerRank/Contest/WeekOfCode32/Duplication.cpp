#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string trans(string s) {
	string str="";
	for(int i=0;i<s.length();i++) {
		if(s[i]=='0') str+="1";
		else str+="0";
	}
	return str;
}

int main() {
	string s="0";
	while(s.length() <= 1000) {
		string ss = trans(s);
		//cout<<ss<<endl;
		s = s + ss;
		//cout<<s<<endl;
	}

	int q;
	cin>>q;
	while(q--) {
		int x;
		cin>>x;
		cout<<s[x]<<endl;
	}
	return 0;
}
