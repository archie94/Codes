#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin>>s;
	int c=0;
	for(int i=2;i<s.size();i+=3) {
		if(s[i-2]!='S') c++;
		if(s[i-1]!='O') c++;
		if(s[i]!='S') c++;
	}
	cout<<c<<endl;
	return 0;
}

