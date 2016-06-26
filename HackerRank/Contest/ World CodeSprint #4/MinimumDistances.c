#include <stdio.h>
#include <stdlib.h>

struct ip{
	int a;
	int i;
};
typedef struct ip ip;

int cmpfunc(const void *a, const void *b) {
	return ( (*(ip *)a).a - (*(ip *)b).a );
}

int main(){
	ip a[1002];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		a[i].a=x;
		a[i].i=i;
	}
	
	qsort(a,n,sizeof(ip),cmpfunc);
	int d = 1002;
	int flag = 0;
	for(i=0;i<n-1;i++) {
		if(a[i].a == a[i+1].a) {
			int x = a[i+1].i-a[i].i;
			flag = 1;
			if(x<d) {
				d=x;
			}
		}
	}
	if(flag) {
		printf("%d\n",d);
	} else {
		printf("-1\n");
	}
	return 0;
}

