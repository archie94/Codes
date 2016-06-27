#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t;
	char s[10002];
	char r[10002];
	scanf("%d",&t);
	while(t--) {
		int i,j,k,flag=0;
		scanf("%s",s);
		k=0;
		for(i=strlen(s)-1;i>=0;i--,k++){
			r[k]=s[i];
		}
		r[k]=0;
		for(i=1;i<strlen(s);i++) {
			j = fabs(s[i]-s[i-1]);
			k = fabs(r[i]-r[i-1]);
			if(j!=k) {
				flag++;
				break;
			}
		}
		if(flag) {
			printf("Not Funny\n");
		} else {
			printf("Funny\n");
		}
	}
	return 0;
}

