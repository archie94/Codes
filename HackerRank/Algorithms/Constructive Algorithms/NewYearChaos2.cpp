#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];

		int ans=0;
		bool flag=true;
		for(int i=0;i<n;i++) {
			if(a[i]-(i+1)>2) {
				flag=false;
				break;
			} else {
				// no of inversions for every element i, 
				// there is <=2 smaller elements on the right
				// this version will TLE out since there is no
				// way to limit j 
				for(int j=i+1;j<=n-1;j++) {
					if(a[i]>a[j]) ans++;
				}
			}
		}
		if(flag) cout<<ans<<endl;
		else cout<<"Too chaotic"<<endl;
	}
	return 0;
}
