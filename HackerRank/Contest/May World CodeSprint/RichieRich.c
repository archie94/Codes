#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n,m,k,i;
	char num[100001];
	int  pos[100001];
	for(i=0;i<100001;i++) {
		pos[i] = 0;
	}

	scanf("%d%d",&n,&k);
	scanf("%s",num);

	for(i=0;i<n/2;i++) {
		if(num[i] != num[n-i-1]) {
			k--;
			if(num[i] > num[n-i-1]) {
				num[n-i-1] = num[i];
				pos[i] = 1;
				pos[n-i-1] = 1;
			} else {
				num[i] = num[n-i-1];
				pos[i] = 1;
				pos[n-i-1] = 1;
			}
		}
	}

	if(k==0) {
		printf("%s\n",num);
	} else if(k>0) {
	       for(i=0;i<n;i++) {
			if(pos[i] && num[i] != '9') {
		 		num[i] = '9';
				num[n-i-1] = '9';
				k--;
			} else if(num[i] !='9' && k>=2) {
				num[i] = '9';
				num[n-i-1] = '9';
				k -= 2;
			} else if( n&1 && i==(n/2) && k) {
				num[i] = '9';
				k--;
			}
			if(!k) {
				break;
			}
		}
	       printf("%s\n",num);
	} else {
		printf("-1\n");
	}
	return 0;
}

