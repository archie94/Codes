#include <iostream>

using namespace std;

int main() {

	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int m,d;
	cin>>d>>m;
	int ans=0;

	for(int i=0;i<n-m+1;i++) {
		int sum=0;
		for(int j=0;j<m;j++) sum+=s[i+j];
		if(sum==d) ans++;
	}
	cout<<ans<<endl;
	return 0;
}

