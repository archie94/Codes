// partial done 
#include <stdio.h>
#include <stdlib.h>

int b1[9000001];
int b2[9000001];
int dp1[9000001];
int dp2[9000001];
int hash[9000001];
int main() {
	int a[4],i,j,k,l;
	scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);

	for(i=0;i<4-1;i++) {
		for(j=0;j<4-i-1;j++) {
			if(a[j]>a[j+1]) {
				a[j] = (a[j]+a[j+1]) - (a[j+1] = a[j]);
			}
		}
	}

	int count = 0;
	for(i=0;i<9000001;i++) {
		//b1[i][0]=0;
		b1[i]=0;
		b2[i]=0;
		hash[i] = 0;
		//b2[i][1]=0;
	}

	/*
	for(i=1;i<=a[0];i++) {
		for(j=i;j<=a[1];j++) {
			for(k=j;k<=a[2];k++) {
				for(l=k;l<=a[3];l++) {
					if( i^j^k^l) {
						count++;
					}
				}
			}
		}
	}
	*/

	k = 1;
	for(i=1;i<=a[0];i++) {
		for(j=i;j<=a[1];j++) {
			dp1[k]  = i^j;
			b1[k] = j;
			k++;
		}
	}

	
	l = 1;
	for(i=1;i<=a[2];i++) {
		for(j=i;j<=a[3];j++) {
			dp2[l]  = i^j;
			b2[l]= i;
			hash[dp2[l]] ++ ;
			l++;
		}
	}

	
	for(i=1;i<k;i++) {
		
		for(j=1;j<l;j++) {
			if(b1[i]  > b2[j]) {
				continue;
			}
			if(dp1[i] ^ dp2[j]) {
				count++;
			}
		}
		/*
		if(hash[dp1[i]]) {
			count += (l-hash[dp1[i]]);
		} else {
			count += l;
		}
		*/

	}

	printf("%d\n",count);

	return 0;
}

