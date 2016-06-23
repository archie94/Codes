#include <stdio.h>
#include <stdlib.h>

int main() {
	int s,a[1002],i,j,k;
	scanf("%d",&s);
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<s;i++) {
		int e = a[i];
		for(j=i-1;j>=0;j--) {
			if(e>a[j]){
				break;
			}
			a[j+1]=a[j];
		}
		a[j+1]=e;
		for(j=0;j<s;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	return 0;
}


