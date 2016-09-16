#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	int t;
	cin>>t;
	getchar();

	while(t--) {
		string s;
		cin>>s;
		int l = s.size();
		int num0=0;
		int num1=0;
		for(int i=0;i<l;i++) {
			if(s[i]=='1') {
				num1++;
			} else if(s[i]=='0'){
				num0++;
			}
		}
		if(num1==1 || num0==1) {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
	return 0;
}

