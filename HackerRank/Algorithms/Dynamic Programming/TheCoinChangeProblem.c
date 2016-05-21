#include <stdio.h>
#include <stdlib.h>

int main() {
	long long n,m,c[51],i,j,x,y;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<m;i++) {
		scanf("%lld",&c[i]);
	}
	
	// table to store values .. fill up in bottom up manner
	long long  dp[252][51];
	for(i=0;i<252;i++) {
		for(j=0;j<51;j++) {
			dp[i][j] = 0;
		}
	}
	
	// if sum is 0 we have 1 option ... take empty set
	for(i=0;i<m;i++) {
		dp[0][i] = 1;
	}

	// fill rest table in bottom up manner
	for(i=1;i<n+1;i++) { // n+1 since we are considering n=0
		for(j=0;j<m;j++) {
			// count no of ways including c[j]
			x = (i - c[j] >= 0)? dp[ i - c[j]][j] : 0;
			// count no of ways excluding c[j]
			y = (j >= 1)? dp[i][j-1] : 0;
			
			dp[i][j] = x + y;
		}
	}

	printf("%lld\n",dp[n][m-1]);
	return 0;
}
