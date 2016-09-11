#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin>>s;
	string str="";
	bool present=false;
	do {
		present=false;
		for(int i=0;i<s.size();i++) {
			while(i<s.size()-1 && s[i]==s[i+1]) {
				i+=2;
				present=true;
			}
			if(i>=s.size()) {
				break;
			}
			str=str+s[i];
		}
		//cout<<str<<endl;
		/*
		if(s[s.size()-1]!=str[str.size()-1]) {
			str=str+s[s.size()-1];
		}*/
		s=str;
		str="";
	}while(present);
	if(s=="") {
		cout<<"Empty String"<<endl;
	} else {
		cout<<s<<endl;
	}
	return 0;
}

