#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n,m;
	int i,j,k,h[26]={0};
	scanf("%d",&n);
	m=n;
	while(n--) {
		char s[102];
		scanf("%s",s);
		int a[26]={0};
		for(i=0;i<strlen(s);i++) {
			if(a[s[i]-'a']==0) {
				a[s[i]-'a']++;
				h[s[i]-'a']++;
			}
		}
	}
	int count=0;
	for(i=0;i<26;i++) {
		//printf("%d ",h[i]);
		if(h[i]==m){
			count++;
		}
	}
	//printf("\n");
	printf("%d\n",count);
	return 0;
}

