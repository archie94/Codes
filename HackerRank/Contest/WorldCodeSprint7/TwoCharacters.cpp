#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {

	int n;
	cin>>n;
	getchar();
	string s;
	cin>>s;

	vector<char> a;
	for(int i=0;i<s.size();i++) {
		if(a.size()==0 || find(a.begin(),a.end(),s[i])==a.end()) {
			a.push_back(s[i]);
		}
	}
	
	if(a.size()<2) {
		cout<<0<<endl;
		return 0;
	}

	//cout<<a.size()<<endl;
	int msize=0;
	for(int i=0;i<a.size()-1;i++) {
		for(int j=i+1;j<a.size();j++) {
			string ss="";
			for(int k=0;k<s.size();k++) {
				if(s[k]==a[i] || s[k]==a[j]) ss=ss+s[k];
			}
			bool ok=true;
			//cout<<ss<<endl;
			for(int k=0;k<ss.size()-1;k++) {
				if(ss[k]==ss[k+1]) {
					ok=false;
					break;
				}
			}
			if(ok && ss.size()>=2 && ss.size()>msize) msize=ss.size();
		}
	}
	cout<<msize<<endl;
	return 0;
}

