#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	unsigned long long t,n;
	scanf("%llu",&t);
	while(t--) {
		scanf("%llu",&n);
		// count the number of set bits in n-1 ... if number is odd print louise else richard
		/*
		   Possible reason :
		   say a number of form 2^k ... eg : 8 has bit representation of 1000 
		   n-1 = 7  has bit representation of form all 1 that is 111
		   each one takes an alternating 1 ... 
		   the one who takes the last 1 is the winner 
		   This can be generalised to even numbers which are not of the form 2^k 
		*/
		unsigned long long count = 0;
		n = n -1;
		while(n) {
			n = n & n-1;
			count++;
		}
		if( count & 1 ) {
			printf("Louise\n");
		} else {
			printf("Richard\n");
		}

	}
	return 0;
}


