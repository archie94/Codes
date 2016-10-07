#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {

	string s;
	int m;
	int used[256];
	cin>>m;
	while(m) {
		getchar();
		getline(cin,s);
	
		long long len=0;
		long long cnt=0;
		memset(used,0,sizeof(used));

		long long begin=0,end=0;
		while(end<s.size()) {
			if(++used[s[end++]]==1) { // for each distinct char found so far increase count and increase ending of substring
				cnt++;
			}

			if(cnt>m) { 				// if num of distinct char > num of distinct char allowed
				while(--used[s[begin++]]);	// increase begining of substring until we discard one distinct char
				cnt=m;
			}

			if(len<end-begin) len=end-begin;

		}
		cout<<len<<endl;
		cin>>m;
	}
	return 0;
}

