// https://www.hackerrank.com/challenges/drawing-book

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n,p;
	cin>>n;
	cin>>p;
	
	int fr=p/2;
	int en=n%2?(n-p)/2:(n-p+1)/2;
	int ans=fr<en?fr:en;
	cout<<ans;
	return 0;
}

