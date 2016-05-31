#include <stdio.h>
#include <stdlib.h>

int main() {
	long long t, n,a[100001],i;
	long long dp[100001],pd[100001];
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);

		for(i=0;i<n;i++) {
			scanf("%lld",&a[i]);
		}
		
		if(n == 1) {
			printf("YES\n");
			continue;
		}
		dp[0] = a[0];
		for(i=1;i<n;i++) {
			dp[i] = dp[i-1] + a[i];
		}

		pd[n-1] = a[n-1];
		for(i=n-2;i>=0;i--) {
			pd[i] = pd[i+1] + a[i];
		}

		int flag = 0;
		for(i=1;i<n-1;i++) {
			if( dp[i-1] == pd[i+1]) {
				flag++;
				break;
			}
		}
		if(flag) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}

