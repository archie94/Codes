#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	int count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=sqrt(i);j++) {
			if(i%j==0) {
				count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}

