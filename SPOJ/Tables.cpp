#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int n,k,s;
	vector<int> a;
	int x;
	cin>>n>>k>>s;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}

	sort(a.begin(),a.end());

	int count=0;
	int c=0;
	n--;
	while(n>=0 && count<(k*s) ){
		count+=a[n];
		n--;
		c++;
	}
	cout<<c<<endl;
	return 0;
}

