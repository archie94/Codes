#include <stdio.h>
#include <stdlib.h>

int main() {
	long long x1,v1,x2,v2;
	scanf("%lld%lld%lld%lld",&x1,&v1,&x2,&v2);
	long long d = x2-x1;
	if(d==0) {
		printf("YES\n");
		return 0;
	}
	// v1.t = v2.t + d;

	long long x = v1-v2;
	float t = 0.0;
	t = (d*1.0)/x;

	if(t<0) {
		printf("NO\n");
		return 0;
	}
//	printf("%f\n",t);
	long long f = (long long)t;
//	printf("%lld\n",f);
	if(f==t) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}

