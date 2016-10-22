#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int m,n;
	cin>>m;
	cin>>n;
	getchar();

	string s;
	map<string,int> hash;
	for(int i=0;i<m;i++) {
		cin>>s;
		hash[s]++;
	}
	getchar();

	bool flag=true;
	for(int i=0;i<n;i++) {
		cin>>s;
		if(hash.find(s)==hash.end())  {
			flag=false;
			break;
		} else if(hash[s]>0) {
			hash[s]--;
		} else {
			flag=false;
			break;
		}
	}
	if(flag) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}

