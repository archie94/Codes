#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin>>s;
	vector<char> ans;
	for(int i=0;i<s.size();i++) {
		if(ans.size()==0 || s[i]!=ans.back()) {
			ans.push_back(s[i]);
		} else {
			ans.pop_back();
		}
	}
	if(ans.size()==0) {
		cout<<"Empty String"<<endl;
	} else {
		for(vector<char>::iterator c=ans.begin();c!=ans.end();++c) {
			cout<<*c;
		}
		cout<<endl;
	}
	return 0;
}
