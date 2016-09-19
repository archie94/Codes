#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
	return ( *(int *)a - *(int *)b);
}

int main() {
	int n,k,i;
	int l[102],t[102],ll[102];
	scanf("%d%d",&n,&k);

	int j=0;
	for(i=0;i<n;i++) {
		scanf("%d%d",&l[i],&t[i]);
		if(t[i]) {
			ll[j++] = l[i];
		}
	}
	
	int sum = 0;
	for(i=0;i<n;i++) {
		sum += l[i];
	}
	qsort(ll,j,sizeof(int),cmpfunc);
	
	int sum2 = 0;
	for(i=0;i<j-k;i++){
		sum2 += ll[i];
	}

	sum = sum - 2*sum2;

	printf("%d\n",sum);
	return 0;
}
