#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main(){
	int n;
        cin>>n;
	vector<int> a(n);
	for(int i = 0;i < n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int sum=a[0];
	for(int i=1;i<n-1;i++) {
		sum+=a[i];
	}
	if(a[n-1]<sum) {
		cout<<0<<endl;
	} else {
		if(n==1) {
			cout<<2<<endl;
		} else if(n==2 && a[0]==a[1]) {
			cout<<2<<endl;
		} else {
			cout<<1<<endl;
		}
	}
	return 0;
}

