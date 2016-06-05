// Partially Done 

#include <stdio.h>
#include <stdlib.h>

typedef struct www {
	long long w;
	long long i;
} www;

long long cmpfunc(const void *a, const void *b) {
	return ( (*(www *)b).w - (*(www *)a).w );
}


int main() {
	int W,B,P;
	long long w[17][11];//products in warehouse
	long long b[11][11];//order
	
	scanf("%d%d%d",&W,&B,&P);
	long long i,j,k;
	for(i=0;i<W;i++) {
		for(j=0;j<P;j++){
			scanf("%lld",&w[i][j]);
		}
	}
	for(i=0;i<B;i++) {
		for(j=0;j<P;j++) {
			scanf("%lld",&b[i][j]);
		}
	}

	for(i=0;i<B;i++) {
		long long needed[17] = {0};
		www ww[17];
		long long flag = 0;
		long long ans = 0;
		for(j=0;j<P;j++) {
			long long sum = 0;
			for(k=0;k<W;k++) {
				ww[k].i=k;
				ww[k].w=w[k][j];
			}
			qsort(ww,W,sizeof(www),cmpfunc);
			for(k=0;k<W;k++) {
				if(sum>=b[i][j]){
					break;
				}
				sum+=ww[k].w;
				if(ww[k].w) {
					needed[ww[k].i]++;
				}
			}
			if(sum < b[i][j]) {
				flag++;
				break;
			}
	 	}
		for(k=0;k<W;k++) {
			if(needed[k]) {
				ans++;
			}
		}
		if(flag) {
			printf("-1\n");
		} else {
			printf("%lld\n",ans);
		}
	}
	return 0;
}

