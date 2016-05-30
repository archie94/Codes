#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char s[1001];
	int i,a[26]={0};
	for(i=0;i<26;i++) {
		a[i] = 0;
	}

	fgets (s, 1001, stdin);
	for(i=0;i<strlen(s);i++) {
		if(s[i] >= 65 && s[i] <= 90) {
			s[i] += 32;
		}
		if(s[i] >= 97 && s[i] <= 122) {
			a[s[i] - 97]++;
		}
	}

	int flag = 0;
	for(i=0;i<26;i++) {
		if(!a[i]) {
			flag++;
		}
	}
	if(flag) {
		printf("not pangram\n");
	} else {
		printf("pangram\n");
	}
	return 0;
}

