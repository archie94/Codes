#include <stdio.h>
#include <stdlib.h>

int main() {
	long long t,n,p[50001],m[50001],i;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&p[i]);
		}
		
		// Find maximum price from current day to future 
		// In each day profit = max from current and future - current days price 
		long long max = p[n-1];
		for(i=n-1;i>=0;i--) {
			if( p[i] > max ) {
				max = p[i];
			}
			m[i] = max;
		}

		long long profit = 0;
		for(i=0;i<n;i++) {
			profit += m[i] - p[i];
		}
		printf("%lld\n",profit);
	}
	return 0;
}

