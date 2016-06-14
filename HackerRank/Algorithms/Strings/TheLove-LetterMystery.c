#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t,i,count;
	char s[10001];
	scanf("%d",&t);
	while(t--) {
		count = 0;
		scanf("%s",s);
		for(i=0;i<strlen(s)/2;i++) {
			if(s[i] != s[strlen(s)-i-1] ){
				count += fabs(s[i]-s[strlen(s)-i-1]);
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

