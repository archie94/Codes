#include <stdio.h>
#include <stdlib.h>

int main() {
	int size,a[1002];
	int i,j,k;
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	i=size-1;
	int e =a[i];
	for(j=i-1;j>=0;j--){
		if(e>a[j]){
			break;
		}
		a[j+1]=a[j];
		for(k=0;k<size;k++){
			printf("%d ",a[k]);
		}
		printf("\n");
	}
	a[j+1]=e;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

