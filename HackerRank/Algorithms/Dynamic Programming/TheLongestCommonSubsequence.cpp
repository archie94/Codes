#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int a[101],b[101],table[102][102],ans[102];
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);
	
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<m;i++) scanf("%d",&b[i]);
	
	for(i=0;i<=n;i++) table[i][0]=0;
	for(i=0;i<=m;i++) table[0][i]=0;

	for(i=1;i<=n;i++) {
		for(j=1;j<=m;j++) {
			if(a[i-1]==b[j-1]) {
				table[i][j] = 1+table[i-1][j-1];
			} else {
				table[i][j] = max(table[i-1][j],table[i][j-1]);
			}
		}
	}
	//printf("%d\n",table[n][m]);
	i=n;j=m;
	k=0;
	while(i>=1 && j>=1) {
		if(a[i-1]==b[j-1]) {
			ans[k++] = a[i-1];
			i=i-1;
			j=j-1;
		} else if(table[i-1][j] >= table[i][j-1]) {
			i--;
		} else {
			j--;;
		}
	}
	for(i=k-1;i>=0;i--) printf("%d ",ans[i]);
	printf("\n");
	return 0;
}

