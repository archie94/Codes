#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

long long cmpfunc( const void *a, const void *b ) {
	return ( *(long long *)a - *(long long *)b );
}

int main() {
	int n,k;
	long a[100001];
	int i;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) {
		scanf("%ld",&a[i]);
	}
	
	qsort(a,n,sizeof(long long),cmpfunc);

	long min = LONG_MAX;
	for(i=0;i<n-k+1;i++) {
		if( a[i+k-1] - a[i] < min ) {
			min = a[i+k-1]-a[i];
		}
	}
	printf("%ld\n",min);
	return 0;
}

