#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// key http://applet-magic.com/digitsummod9.htm

int digit_sum(string s) {
	int res = 0;

	for (int i=0;i<s.size();i++) {
		res = (res + (s[i]-48))%9;
	}
	return res % 9;
}

int main() {
	string s;
	int k;
	cin>>s>>k;
	k = k%9;

	if (k==0) {
		cout<<9<<endl;
		return 0;
	}

	int digitSum = digit_sum(s);
	digitSum = (digitSum * k)%9;

	if (digitSum) {
		cout<<digitSum<<endl;
	} else {
		cout<<9<<endl;
	}
	return 0;
}

