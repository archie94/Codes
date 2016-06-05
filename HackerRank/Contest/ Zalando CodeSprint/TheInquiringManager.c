#include <stdio.h>
#include <stdlib.h>

typedef struct order{
	long long p;
	long long t;
} order;

order a[1000001];
int main() {
	long long n,i,x,y,z,k;
	for(i=0;i<1000001;i++) {
		a[i].p = -1;
		a[i].t = -1;
	}

	k=0;
	scanf("%lld",&n);
	while(n--) {
		scanf("%lld",&x);
		if(x==1) {
			scanf("%lld%lld",&y,&z);
			a[k].p = y;
			a[k].t = z;
			k++;
		} else {
			scanf("%lld",&y);
			long long max = -1;
			for(i=k-1;i>=0;i--) {
				if(y-a[i].t+1 > 60) {
					break;
				}
				if(max<a[i].p) {
					max = a[i].p;
				}
			}
			printf("%lld\n",max);
		}
	}
	return 0;
}


