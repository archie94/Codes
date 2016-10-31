#include <string>
#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	long long a,b;
	cin>>a;
	cin>>b;
	
	long long ans=0;
	for(long long i=a;i<=b;i++) {
		string s=to_string(i);
		for(int j=0;j<s.size();j++) {
			if(j==0 || j==s.size()-1) {
				continue;
			}

			if(s[j]<s[j-1] && s[j]<s[j+1]) ans++;
			else if(s[j]>s[j-1] && s[j]>s[j+1]) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}

