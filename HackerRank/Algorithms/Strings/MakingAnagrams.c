#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	char a[10002],b[10002];
	int hash[26]={0};
	int i;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<strlen(a);i++) {
		hash[a[i]-'a']++;
	}
	for(i=0;i<strlen(b);i++) {
		hash[b[i]-'a']--;
	}
	int sum=0;
	for(i=0;i<26;i++) {
		sum += fabs(hash[i]);
	}
	printf("%d\n",sum);
	return 0;
}

