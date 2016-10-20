#include <iostream>
#include <cstdio>
#include <map>
#include <string>

using namespace std;

int main() {
	int n;
	cin>>n;
	getchar();
	map<string,string> m;
	for(int i=0;i<n;i++) {
		string k,v;
		cin>>k;
		getchar();
		cin>>v;
		m[k]=v;
	}

	string name;
	while(cin>>name) { // will stop in case of EOF
		if(m.find(name)==m.end()) {
			cout<<"Not found"<<endl;
		} else {
			cout<<name<<"="<<m[name]<<endl;
		}
	}
	return 0;
}

