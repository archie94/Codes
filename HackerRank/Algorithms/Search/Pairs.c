#include <stdlib.h>
#include <stdio.h>

long long a[100001];
long long cmpfunc(const void *a, const void *b) {
	return (*(long long *)a - *(long long *)b);
}

long long bSearch(long long start,long long end, long long item) {
	long long mid=(start+end)/2;
	while(start <= end) {
		if(a[mid] == item) {
			return mid;
		}
		if(a[mid] > item) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		mid=(start + end)/2;
	}
	return -1;
}


int main() {
	long long n,k;
	scanf("%lld%lld",&n,&k);
	long long i;
	for(i=0;i<n;i++) {
		scanf("%lld",&a[i]);
	}
	long long count = 0;
	qsort(a,n,sizeof(long long),cmpfunc);
/*
	i=0;
	long long j=n-1;
	while(i<=j) {
		if(a[i] + k == a[j]) {
			count++;
			i++;
		} else if(a[i] + k < a[j]) {
			i++;
		} else {
			j--;
		}
	}
	*/
	for(i=0;i<n;i++) {
		long long pos =  bSearch(0,n-1,a[i]+k);
		if(pos!=-1 && pos!=i) {
			count++;
		}
	}

	printf("%lld\n",count);
	return 0;
}

