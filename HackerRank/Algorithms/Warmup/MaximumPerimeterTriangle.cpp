#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin>>n;

	long long l[n];
	for(int i=0;i<n;i++) cin>>l[i];

	sort(l,l+n);

	bool found=false;
	for(int i=n-1;i>=2;i--) {
		for(int j=i-1;j>=1;j--) {
			for(int k=j-1;k>=0;k--) {
				if(l[i]<l[k]+l[j]) {
					cout<<l[k]<<" "<<l[j]<<" "<<l[i]<<endl;
					found=true;
					break;
				}
			}
			if(found) break;
		}
		if(found) break;
	}

	if(!found) cout<<"-1"<<endl;
	return 0;
}

