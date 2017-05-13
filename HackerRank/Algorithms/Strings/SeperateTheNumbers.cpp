#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--) {
		string s;
		cin>>s;

		bool valid = false;
		long long firstx = -1;

		// try each possible starting number
		for(int i=1;i<=s.length()/2;i++) {
			string str = s.substr(0,i);
			long long x = stoll(str);

			firstx=x;
			while(str.length() < s.length()) {
				str += to_string(++x);
			}

			if(str == s) {
				valid = true;
				break;
			}
		}
		if(valid) {
			cout<<"YES "<<firstx<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
