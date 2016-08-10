#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;

bool isKaprekar(long long n) {
	long long sq=n*n;
	string nn=to_string(n);
	string s=to_string(sq);
	long long l=s.size();
	long long d=nn.size();
	//cout<<s<<endl;
	//cout<<l<<endl;
	
	if(l==d) {
		if(sq==n) return true;
		return false;
	}

	string s1=s.substr(0,l-d);
	string s2=s.substr(l-d,d);
	int a=stoi(s1);
	int b=stoi(s2);
	if(a+b==n) return true;
	return false;
}

int main() {
	long long p,q;
	cin>>p>>q;
	bool exist = false;
	for(long long i=p;i<=q;i++) {
		if(isKaprekar(i)) {
			cout<<i<<" ";
			exist=true;
		}
	}
	if(!exist) {
		cout<<"INVALID RANGE";
	}
	cout<<endl;
	return 0;
}

