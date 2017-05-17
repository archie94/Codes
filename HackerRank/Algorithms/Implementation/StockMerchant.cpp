#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin>>n;
	int hash[101] = {0};
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		hash[x]++;
	}
	int sum=0;
	for(int i=1;i<=100;i++) {
		sum+=(hash[i]/2);
	}
	cout<<sum<<endl;
	return 0;
}
