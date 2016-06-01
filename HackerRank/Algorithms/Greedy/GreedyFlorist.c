#include <stdio.h>
#include <stdlib.h>

long cmpfunc( const void *a, const void *b) {
	return (*(long *)a - *(long *)b);
}

int main() {
	long long n,k,c[101],i;
	scanf("%lld%lld",&n,&k);
	for(i=0;i<n;i++) {
		scanf("%lld",&c[i]);
	}

	qsort(c,n,sizeof(long),cmpfunc);
	
	long long cost = 0;
	long long x = 1;
	long long kk = k;
	for(i=n-1;i>=0;i--) {
		if(k) {
			k--;
			cost +=(x* c[i]);
		} else {
			x++;
			cost += (x*c[i]);
			k = kk-1;
		}
	}
	printf("%lld\n",cost);
	return 0;
}

