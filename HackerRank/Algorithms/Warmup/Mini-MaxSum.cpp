#include <algorithm>
#include <vector>
#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
	long long a[5];
	for(int i=0;i<5;i++) {
		cin>>a[i];
	}
	sort(a,a+5);
	cout<<(a[0]+a[1]+a[2]+a[3])<<" "<<(a[1]+a[2]+a[3]+a[4])<<endl;
	return 0;
}

