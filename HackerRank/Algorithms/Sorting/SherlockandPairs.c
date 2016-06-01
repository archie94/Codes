// Can be solved by hashing also ... save all array elements in a hash and then apply permutation based on number of occurances of each keys


#include <stdio.h>
#include <stdlib.h>

long long cmpfunc( const void *a, const void *b) {
	return ( *(long long *)a - *(long long *)b);
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,a[100001],i;
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&a[i]);
		}
	
		qsort(a,n,sizeof(long long),cmpfunc);
		long long m = 0;
		long long sum = 0;
		for(i=0;i<n-1;i++) {
			if(a[i] == a[i+1]) {
				m++;
			} else if(m) {
				m++;
				sum += (m*(m-1));
				m = 0;
			}
		}
		if(a[n-2] == a[n-1]) {
			m++;
			sum+= (m*(m-1));
		}
		printf("%lld\n",sum);
	}
	return 0;
}

