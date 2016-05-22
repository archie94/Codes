#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long cmpfunc(const void *a, const void *b) {
	return (*(long long *)a - *(long long *)b);
}


int main() {
	long long n,k,p[100001];
	scanf("%lld%lld",&n,&k);
	long long i;
	for(i=0;i<n;i++) {
		scanf("%lld",&p[i]);
	}
	long long sum = 0;
	qsort(p,n,sizeof(long long),cmpfunc);

	i=0;
	while(sum<=k) {
		sum += p[i++];
	}
	printf("%lld\n",i-1);
	return 0;
}

