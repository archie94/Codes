#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int ans = 0, c =0;
	for (int i=0;i<n;i++) {
		c= 0;
		for (int j=0;j<n-1;j++) {
			if (a[j]>a[j+1]) {
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				c++;
				ans++;
			}
		}
		if(!c) {
			break;
		}
	}
	cout<<"Array is sorted in "<<ans<<" swaps."<<endl;
	cout<<"First Element: "<<a[0]<<endl;
	cout<<"Last Element: "<<a[n-1]<<endl;
	return 0;
}

