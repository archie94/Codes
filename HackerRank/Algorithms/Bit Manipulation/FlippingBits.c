#include <stdio.h>
#include <stdlib.h>

int main() {
	int t;
	unsigned int n; // int is 32 bit ... unsigned so that flipping does not represent it as  a negative number 
	scanf("%d",&t);
	while(t--) {
		scanf("%u",&n);
		printf("%u\n",~n);
	}
	return 0;
}

