#include <stdio.h>
#include <stdlib.h>

int main() {
	int t;
	long long a[100001];
	long long n,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&a[i]);
		}
		/*
		   If n is even result is always 0
		   If n is odd result is X1 ^ X3 ^ X5 ^ .... 
		   Work it out
		*/
		if(n&1) {
			long long xor = 0;
			for(i=0;i<n;i+=2) {
				xor = xor ^ a[i];
			}
			printf("%lld\n",xor);
		} else {
			printf("0\n");
		}
	}
	return 0;
}

