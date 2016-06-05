#include <stdio.h>
#include <stdlib.h>

typedef struct shoe {
	long id;
	long num;
} shoe;

long cmpfunc(const void *a, const void *b) {
	return ( (*(shoe *)b).num - (*(shoe *)a).num );
}

int main() {
	
	long k,m,n,i,x;
	shoe hash[50001];
	for(i=0;i<50001;i++) {
		hash[i].id = 0;
		hash[i].num = 0;
	}

	scanf("%ld%ld%ld",&k,&m,&n);
	for(i=0;i<n;i++) {
		scanf("%ld",&x);
		hash[x].id = x;
		hash[x].num++;
	}
	
	qsort(hash,50001,sizeof(shoe),cmpfunc);
	
	i=0;
	while(k--) {
		printf("%ld\n",hash[i].id);
		i++;
	}
	return 0;
}

