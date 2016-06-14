#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t,i,count;
	char s[100001];
	scanf("%d",&t);
	while(t--){
		count = 0;
		scanf("%s",s);
		for(i=1;i<strlen(s);i++) {
			if(s[i]==s[i-1]) {
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

