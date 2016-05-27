#include <stdio.h>
#include <stdlib.h>

int main() {
	long long n,r[100001],i,res[100001];
	scanf("%lld",&n);
	for(i=0;i<n;i++) {
		scanf("%lld",&r[i]);
	}
	
	res[0] = 1;
	long long sum = 0;
	// scan from first and set the number of candies to be given satisfying the conditions
	for(i=1;i<n;i++) {
		if(r[i]>r[i-1]) {
			res[i] = res[i-1] + 1;
		} else {
			res[i] = 1;
		}
	}
	
	// scan again from the end in a similar fashion
	for(i=n-2;i>=0;i--) {
		if(r[i]>r[i+1] && res[i] <= res[i+1]) {
			res[i] = res[i+1] + 1;
		} 
	}
	for(i=0;i<n;i++) {
		sum += res[i];
	}
	printf("%lld\n", sum);
	return 0;
}

