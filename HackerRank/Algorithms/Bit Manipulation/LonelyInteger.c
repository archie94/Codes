#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int a;
	int i;
	int ans=0;
	scanf("%d",&n);
	while(n--) {
		scanf("%d",&a);
		ans = ans ^ a;
	}
	printf("%d\n",ans);
	return 0;
}

