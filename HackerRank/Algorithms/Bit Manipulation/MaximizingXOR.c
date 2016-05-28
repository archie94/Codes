#include <stdio.h>
#include <stdlib.h>

int main() {
	int l,r,x[1000001],i,j,k=0,m=0;
	scanf("%d%d",&l,&r);

	for(i=0;i<=r-l;i++) {
		for(j=i+1;j<=r-l;j++) {
			x[k++] = (l+i)^(l+j);
		}
	}
	for(i=0;i<k;i++) {
		if(x[i]>m) {
			m=x[i];
		}
	}
	printf("%d\n",m);
	return 0;
}

