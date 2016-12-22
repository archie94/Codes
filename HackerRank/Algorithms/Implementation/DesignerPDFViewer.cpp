#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int main() {
	int w=1;
	int h[26];
	for(int i=0;i<26;i++) cin>>h[i];
	string s;
	cin>>s;
	int area=0;
	int maxh=h[s[0]-'a'];
	for(int i=1;i<s.size();i++) {
		if(h[s[i]-'a']>maxh) maxh=h[s[i]-'a'];
	}
	area = s.size()*w*maxh;
	cout<<area<<endl;
	return 0;
}

