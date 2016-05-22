#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,t,n,k;
	int permu[100002];
	int used[100002];
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&k);
		for(i=0;i<=100001;i++) {
			used[i] = 0;
			permu[i] = i;
		}

		int flag = 0;
		for(i=1;i<=n;i++) { 
			if( i - k >= 1 && !used[i-k]) {
				permu[i] = i-k;
				used[i-k] = 1;
			} else if( i + k <= n	&& !used[i+k]) {
				permu[i] = i+k;
				used[i+k] = 1;
			} else {
				flag++;
				break;
			}
		}
		if(flag) {
			printf("-1\n");
		} else {
			for(i=1;i<=n;i++) {
				printf("%d ",permu[i]);
			}
			printf("\n");
		}
	}
	return 0;
}

