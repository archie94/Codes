#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
	int n;
	int x;
	cin>>n>>x;
	int f=(int)pow(2,n) - 1;
	cout<<abs(x-f)<<endl;
	return 0;
}

