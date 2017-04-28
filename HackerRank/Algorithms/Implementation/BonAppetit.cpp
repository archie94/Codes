#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n,k;
	cin>>n>>k;

	int c[n];
	for(int i=0;i<n;i++) cin>>c[i];

	long b;
	cin>>b;

	long sum=0;
	for(int i=0;i<n;i++) sum+=((long)c[i]);

	sum-=c[k];
	sum/=2;

	if(!abs(sum-b)) {
		cout<<"Bon Appetit"<<endl;
	} else {
		cout<<abs(sum-b)<<endl;
	}
	return 0;
}

