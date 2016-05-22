#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[3],b[3],alice=0,bob=0;
	int i;
	for(i=0;i<3;i++) {
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++) {
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++){
		if(a[i]>b[i]) {
			alice++;
		} else if(a[i] < b[i]) {
			bob++;
		}
	}
	printf("%d %d\n",alice,bob);
	return 0;
}

