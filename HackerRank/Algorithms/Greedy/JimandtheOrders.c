#include <stdio.h>
#include <stdlib.h>



typedef struct td {
	long t;
	long d;
	long sum;
	long i;
} td;
long cmpfunc(const void *a, const void *b) {
	return ( (*(td *)a).sum - (*(td *)b).sum );
}

int main() {
	long n,i,j,l,x,y;
	td input[1001];
	scanf("%ld",&n);
	for(i=0;i<n;i++) {
		scanf("%ld%ld",&x,&y);
		input[i].i=i+1;
		input[i].t=x;
		input[i].d=y;
		input[i].sum=x+y;
	}

	qsort(input,n,sizeof(td),cmpfunc);

	for(i=0;i<n;i++){
		printf("%ld ",input[i].i);
	}
	printf("\n");
	return 0;
}


