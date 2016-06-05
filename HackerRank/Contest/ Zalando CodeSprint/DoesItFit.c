#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int W,H,N;
	char s;
	scanf("%d%d",&W,&H);
	scanf("%d",&N);
	int i,r,w,h;
	for(i=0;i<N;i++) {
		fflush(stdin);
		scanf(" %c ",&s);
		if(s=='C') {
			scanf("%d",&r);
			if(2*r<=W && 2*r<=H) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		} else if(s=='R') {
			scanf("%d%d",&w,&h);
			int a,b,p,q;
			if(w>=h) {
				p=w;
				q=h;
			} else {
				p=h;
				q=w;
			}
			if(W>=H) {
				a=W;
				b=H;
			} else {
				a=H;
				b=W;
			}
			float val = pow(((a+b)*1.0/(p+q)),2) + pow( ((a-b)*1.0/(p-q)),2);
			
			if( (w<=W && h<=H) || (w<=H && h<=W) ){
				printf("YES\n");
			} else if( p>a && q<=b && val>=2.0) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		} 
	}
	return 0;
}

