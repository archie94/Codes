// https://www.hackerrank.com/challenges/counting-valleys

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long n;
	cin>>n;

	int h=0;
	int ans=0;
	char c;
	for(int i=1;i<=n;i++) {
		cin>>c;
		if(c=='U') h++;
		else h--;
		if(!h && c=='U') ans++;
	}
	cout<<ans<<endl;
	return 0;
}

