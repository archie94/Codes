// this soln gives out of mem error for large test cases

#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

int funDigitSum(string n) {
	if (n.size() == 1) {
		return n[0]-48;
	}

	long long res = 0;
	for (int i=0;i<n.size();i++) {
		res += n[i]-48;
	}

	return funDigitSum(to_string(res));
}

int digitSum(string n, int k) {
	string s = "";
	for (int i=0;i<k;i++) s+=n;

	return funDigitSum(s);
}

int main() {
	string n;
	int k;
	cin>>n>>k;
	int result = digitSum(n,k);
	cout<<result<<endl;
	return 0;
}

