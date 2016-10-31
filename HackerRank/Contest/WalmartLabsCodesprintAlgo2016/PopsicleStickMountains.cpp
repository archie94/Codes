#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

#define MOD 1000000007

using namespace std;

int main() {
	int t;
	cin>>t;
	long long cat[4001];// store catalan numbers here
	cat[0]=1;
	cat[1]=1;
	long long a=cat[0];
	long long b=cat[1];
	for(int i=2;i<4001;i++) {
		for(int j=0;j<i;j++) {
			cat[i]=(cat[i] + (cat[j]%MOD*cat[i-j-1]%MOD)%MOD)%MOD;
		}
	}
	
	while(t--) {
		long long ans=0;
		int n;
		cin>>n;
		
		int i=1,k=2;
		for(k=2;k<=n;k+=2,i++) {
			ans = (ans+cat[i])%MOD;
		}
		cout<<ans<<endl;
	}
	return 0;
}

