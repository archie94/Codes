#include <iostream>
#include <algorithm>

using namespace std;

int dp[37] = {0};

int stairWays(int n) {
	if (n < 0) return 0;
	if (n == 0) return 1;

	int a =0, b=0, c=0;
	if (n>=1 && dp[n-1] == 0) {
		dp[n-1] = stairWays(n-1);
		a = dp[n-1];
	} else if (dp[n-1]) a = dp[n-1];
	if (n>=2 && dp[n-2] == 0) {
		dp[n-2] = stairWays(n-2);
		b= dp[n-2];
	} else if (dp[n-2]) b= dp[n-2];
	if (n>=3 && dp[n-3] == 0)  {
		dp[n-3] = stairWays(n-3);
		c = dp[n-3];
	} else if (dp[n-3]) c = dp[n-3];
	return a+b+c;
}

int main() {

	int s,n;
	cin>>s;

	while(s--) {
		cin>>n;

		dp[0] = 1;
		cout<<stairWays(n)<<endl;
	}
	return 0;
}

