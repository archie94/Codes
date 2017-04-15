#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	long long n;
	cin>>n;
	
	long long ans=0;
	/*
	 * XOR simulates binary addition without the carry over to next digit.
	 * For 0 bits of n we either add 1 or 0 depending on bits of x.
	 * If a bit of n is 1 then matching bit in x is forced to be 0 to avoid 
	 * carry.
	 * For each 0 in n in the matching bit in x can either being a 1 or 0 
	 * with a total combination count of 2^(num of zero).
	 */
	while(n) {
		ans += !(n%2);
		n/=2;
	}
	ans=pow(2,ans);
	cout<<ans<<endl;
	return 0;
}
