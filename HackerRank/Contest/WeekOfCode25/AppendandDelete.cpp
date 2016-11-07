#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s,t;
	int k;
	cin>>s>>t;
	cin>>k;
	
	int c=0;
	for(int i=0;i<s.size();i++) {
		string prefix=s.substr(0,i+1);
		if (std::mismatch(prefix.begin(), prefix.end(), t.begin()).first == prefix.end()) {
			c++;
		} else {
			break;
		}
	}
	
	int del=s.size()-c; // no of chars to delete
	int add=t.size()-c;
	if(del+add==k) cout<<"Yes"<<endl;
	else if(del+add<k) {
		int extra=k-del-add;
		if(extra>=2*c) {
			cout<<"Yes"<<endl;
		} else if(extra<2*c && extra%2==0) {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
	else cout<<"No"<<endl;
	//cout<<add+del<<endl;
	return 0;
}

