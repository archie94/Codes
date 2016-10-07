#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		long long en[n],ex[n];
		long long maxex=0;
		for(int i=0;i<n;i++) {
			cin>>en[i]>>ex[i];
			if(ex[i]>maxex) maxex=ex[i];
		}

		sort(en,en+n);
		sort(ex,ex+n);

		//for(int i=0;i<n;i++) cout<<tm[i].en<<" "<<tm[i].ex<<endl;
		
		long long present=0,max_present=0;
		long long j=0,k=0;
		for(long long i=0;i<=maxex;i++) {
			
			if(j<n && i==en[j]) {
				present++;
				j++;
				//cout<<present<<"at "<<i<<endl;
			}
			if(k<n && i==ex[k]) {
				present--;
				k++;
				//cout<<present<<"at "<<i<<endl;
			}

			if(present>max_present) max_present=present;
		}

		cout<<max_present<<endl;
	}
	return 0;
}

