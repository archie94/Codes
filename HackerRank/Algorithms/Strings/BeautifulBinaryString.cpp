#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n;
	std::string s;
	cin>>n;
	cin>>s;
	std::string str=s;
	//std::replace(str.begin(),str.end(),"010","");
	//cout<<(s.size()-str.size())/3<<endl;
	
	int c=0;
	for(int i=2;i<s.size();i++) {
		if(s[i]=='0' && s[i-1]=='1' && s[i-2]=='0') {
			c++;
			i+=2;
		}
	}
	cout<<c<<endl;
	return 0;
}
