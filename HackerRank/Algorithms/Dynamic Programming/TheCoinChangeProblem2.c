#include <stdio.h>
#include <stdlib.h>

int main() {
	long long i,j,n,m,c[51],dp[252];
	scanf("%lld%lld",&n,&m);
	for(i=0;i<m;i++) {
		scanf("%lld",&c[i]);
	}

	for(i=0;i<252;i++) {
		dp[i] = 0;
	}

	dp[0] = 1;

	/*
	   Top bottom approach
	*/
	for(i=0;i<m;i++) {
		for(j=c[i];j<=n;j++) {
			dp[j] += dp[j-c[i]];
		}
	}

	printf("%lld\n",dp[n]);
	return 0;
}

