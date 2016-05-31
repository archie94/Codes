#include <stdio.h>
#include <stdlib.h>

int main() {
	long long n,m,x,i;
	long long hash[10001]={0};
	scanf("%lld",&n);
	while(n--) {
		scanf("%lld",&x);
		hash[x]++;
	}
	scanf("%lld",&m);
	while(m--) {
		scanf("%lld",&x);
		hash[x]--;
	}
	for(i=0;i<10001;i++) {
		if(hash[i] < 0) {
			printf("%lld ",i);
		}
	}
	printf("\n");
	return 0;
}

