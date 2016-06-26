#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	double u,e,g;
	int i;
	int res;
	scanf("%d",&n);
	while(n--) {
		scanf("%lf%lf%lf",&u,&e,&g);
		double res = 100000/(u*e*g);
		res = res - 100000 ;

		if ( res >= 0 ) {
			int r = res ;
			printf("%d\n",r);
		} else {
			printf("0\n");
		}
	}
	return 0;
}

