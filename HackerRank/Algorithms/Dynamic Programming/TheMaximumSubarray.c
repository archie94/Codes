#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max(a,b) a>b?a:b

int main() {
	int t,a[100001],n,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}

		long long sum_non_contiguous = a[0];
		for(i=1;i<n;i++) {
			if(sum_non_contiguous < 0 && a[i] > sum_non_contiguous) {
				sum_non_contiguous = a[i];
			} else if(a[i] > 0) {
				sum_non_contiguous += a[i];
			}
		}

		int max_start_here=0;
		long long current_max = a[0];
		long long max_so_far=a[0];
		for(i=1;i<n;i++) {
			current_max = max(a[i], current_max + a[i]);
			max_so_far = max(current_max, max_so_far);
		}

		printf("%lld %lld\n",max_so_far, sum_non_contiguous);
	}
	return 0;
}

