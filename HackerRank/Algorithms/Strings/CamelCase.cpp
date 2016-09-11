#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.size();i++) {
		if(s[i]>=65  && s[i]<=90) c++;
	}
	cout<<c+1<<endl;
	return 0;
}

