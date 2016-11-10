#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int l;
	cin>>l;
	getchar();
	string s;
	cin>>s;
	
	int ch[26]={0};
	for(int i=0;i<s.size();i++) ch[s[i]-'a']++;
	vector<char> a;
	for(int i=0;i<26;i++) if(ch[i]) a.push_back((char)('a'+i));

	int max_len=0;
	for(int i=0;i<a.size()-1;i++) {
		for(int j=i+1;j<a.size();j++) {
			string ss="";
			for(int k=0;k<s.size();k++) {
				if(s[k]==a[i] || s[k]==a[j]) {
					ss+=s[k];
				}
			}
			bool ok=true;
			for(int k=1;k<ss.size();k++) {
				if(ss[k]==ss[k-1]) {
					ok=false;
					break;
				}
			}
			if(ok && ss.size()>max_len) max_len=ss.size();
		}
	}
	cout<<max_len<<endl;
	return 0;
}

